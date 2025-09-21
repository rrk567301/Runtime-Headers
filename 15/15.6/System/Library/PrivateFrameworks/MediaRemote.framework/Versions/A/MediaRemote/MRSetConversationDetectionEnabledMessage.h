@class NSString;

@interface MRSetConversationDetectionEnabledMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *outputDeviceUID;
@property (readonly, nonatomic) char enabled;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithOutputDeviceUID:(id)a0 enabled:(char)a1;
- (id)initWithUnderlyingCodableMessage:(id)a0 error:(id)a1;

@end
