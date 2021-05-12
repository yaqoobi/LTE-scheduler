#ifndef ENHANCED_EXP_RULE_DOWNLINK_PACKET_SCHEDULER_H_
#define ENHANCED_EXP_RULE_DOWNLINK_PACKET_SCHEDULER_H_

#include "downlink-packet-scheduler.h"

class EnhancedExpRuleDownlinkPacketScheduler : public DownlinkPacketScheduler {
public:
	EnhancedExpRuleDownlinkPacketScheduler();
	virtual ~EnhancedExpRuleDownlinkPacketScheduler();

	virtual void DoSchedule (void);

	void ComputeAverageOfHOLDelays (void);
	virtual double ComputeSchedulingMetric (RadioBearer *bearer, double spectralEfficiency, int subChannel);

private:
	double m_avgHOLDelayes;
};

#endif /* EXP_RULE_DOWNLINK_PACKET_SCHEDULER_H_ */
