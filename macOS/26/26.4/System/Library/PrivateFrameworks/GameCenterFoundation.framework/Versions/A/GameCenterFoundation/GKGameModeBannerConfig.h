@class NSString, NSArray;

@interface GKGameModeBannerConfig : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, copy, nonatomic) NSArray *actionSymbols;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 enabled:(BOOL)a1 actionSymbols:(id)a2;

@end
