@interface AVCBasebandAudioTapRegistrationResult : NSObject

@property (nonatomic) char didSucceed;
@property (nonatomic) long long tapToken;
@property (nonatomic) long long uplinkToken;
@property (nonatomic) long long downlinkToken;

- (id)description;
- (id)init;

@end
