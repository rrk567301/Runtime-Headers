@class NSString;

@interface AXAppSceneRepresentation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *fbSceneIdentifier;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 fbSceneIdentifier:(id)a1;

@end
