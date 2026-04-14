@class NSString;

@interface BKSHIDEventDeliveryPolicy : NSObject <BSDescriptionStreaming> {
    BOOL _finalStringTokenInChain;
}

@property (readonly, nonatomic) long long deferringPolicyStatus;
@property (readonly, nonatomic) BOOL finalStringTokenInChain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendDescriptionToStream:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_initWithPolicyObservation:(id)a0;

@end
