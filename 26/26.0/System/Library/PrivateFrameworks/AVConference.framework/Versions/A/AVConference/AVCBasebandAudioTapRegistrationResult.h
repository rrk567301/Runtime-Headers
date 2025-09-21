@interface AVCBasebandAudioTapRegistrationResult : NSObject

@property (nonatomic) BOOL didSucceed;
@property (nonatomic) long long tapToken;
@property (nonatomic) long long uplinkToken;
@property (nonatomic) long long downlinkToken;

- (id)init;
- (id)description;

@end
