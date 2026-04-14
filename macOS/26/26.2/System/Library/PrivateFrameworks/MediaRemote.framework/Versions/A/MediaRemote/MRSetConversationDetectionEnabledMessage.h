@class NSString;

@interface MRSetConversationDetectionEnabledMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *outputDeviceUID;
@property (readonly, nonatomic) BOOL enabled;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithUnderlyingCodableMessage:(id)a0 error:(id)a1;
- (id)initWithOutputDeviceUID:(id)a0 enabled:(BOOL)a1;

@end
