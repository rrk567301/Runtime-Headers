@class NSString, NSDate;

@interface PMMMusicContainer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *trackIdentifier;
@property (readonly, nonatomic) NSDate *playTime;
@property (readonly, nonatomic) NSDate *pauseTime;

- (id)description;
- (void)setPlayingWithBundleId:(id)a0 trackIdentifier:(id)a1 playTime:(id)a2;
- (void)setPauseIfUnset;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
