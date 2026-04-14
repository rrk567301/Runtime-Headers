@class NSString;
@protocol AVAudioSecureSessionProtocol;

@interface AVAudioSessionSpecification : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long sessionType;
@property (nonatomic) struct { unsigned int val[8]; } clientAuditToken;
@property (nonatomic) unsigned int sourceSessionID;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (nonatomic) unsigned int useCaseIdentifier;
@property (weak, nonatomic) id<AVAudioSecureSessionProtocol> publishingSession;
@property (nonatomic) BOOL autoReconnect;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
