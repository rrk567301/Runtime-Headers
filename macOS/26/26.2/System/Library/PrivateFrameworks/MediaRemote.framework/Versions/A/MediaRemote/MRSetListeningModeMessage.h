@class NSString;

@interface MRSetListeningModeMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *listeningMode;
@property (readonly, nonatomic) NSString *outputDeviceUID;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithUnderlyingCodableMessage:(id)a0 error:(id)a1;
- (id)initWithListeningMode:(id)a0 outputDeviceUID:(id)a1;

@end
