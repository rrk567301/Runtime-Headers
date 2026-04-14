@interface HMAccessoryInfoSleepWakeState : NSObject

@property (readonly) unsigned long long sleepWakeState;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)description;
- (id)protoData;
- (id)initWithProtoPayload:(id)a0;
- (id)initWithSleepWakeState:(unsigned long long)a0;
- (id)protoPayload;

@end
