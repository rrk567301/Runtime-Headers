@interface TUContinuityHandleCapabilities : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL supportsTelephonyCalls;
@property (readonly, nonatomic) BOOL supportsFaceTimeAudio;
@property (readonly, nonatomic) BOOL supportsFaceTimeVideo;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSupportsTelephonyCalls:(BOOL)a0 supportsFaceTimeAudio:(BOOL)a1 supportsFaceTimeVideo:(BOOL)a2;

@end
