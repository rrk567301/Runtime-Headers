@class NSDate;

@interface GEORouteHypothesizerAnalyticsStore : NSObject <NSSecureCoding> {
    double _observedEarlyDeltaFromRequiredTimeToLeave;
    double _observedLateDeltaFromRequiredTimeToLeave;
    unsigned long long _hypothesizerRerouteCount;
    unsigned long long _hypothesisCount;
    char _stopped;
    unsigned long long _uiNotificationType;
    NSDate *_lastGenerationDate;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long etaUpdatesAfterEventStart;
@property (nonatomic) char etaUpdatesWereReported;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)didArriveWithExpectedArrivalTime:(id)a0;
- (void)didGenerateHypothesis;
- (void)didReroute;
- (void)didShowUI:(unsigned long long)a0;
- (void)didStartMovingWithExpectedDepartureTime:(id)a0;
- (void)didStopHypothesizing;
- (void)didStopMoving;

@end
