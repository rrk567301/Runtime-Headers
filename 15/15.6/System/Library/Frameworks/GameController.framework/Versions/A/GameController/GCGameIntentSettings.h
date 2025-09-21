@class NSString;

@interface GCGameIntentSettings : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long type;
@property (nonatomic) char enabled;
@property (copy, nonatomic) NSString *gameBundleID;
@property (nonatomic) long long appLibraryPod;

+ (id)appLibrarySettings:(char)a0 appLibraryPod:(long long)a1;
+ (id)gameSettings:(char)a0 gameBundleID:(id)a1;
+ (id)homeScreenSettings:(char)a0;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
