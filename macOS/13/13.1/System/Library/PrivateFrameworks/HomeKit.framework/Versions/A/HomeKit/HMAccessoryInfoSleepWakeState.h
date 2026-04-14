@interface HMAccessoryInfoSleepWakeState : NSObject

@property (readonly) unsigned long long sleepWakeState;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)protoData;
- (id)protoPayload;
- (id)initWithProtoPayload:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)initWithSleepWakeState:(unsigned long long)a0;

@end
