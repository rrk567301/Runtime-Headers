@class NSArray;

@interface WiFiUsageSessionPingPongStats : NSObject

@property (nonatomic) unsigned long long pingPongNth;
@property (retain, nonatomic) NSArray *sequence;
@property (nonatomic) char pingPongSequenceIsLowRssiOnly;
@property (nonatomic) char pingPongSequenceIsReassocOnly;
@property (nonatomic) char pingPongSequenceIsReassocOrLowRSSIOnly;

- (void).cxx_destruct;
- (id)initWithPingPongSequence:(id)a0;

@end
