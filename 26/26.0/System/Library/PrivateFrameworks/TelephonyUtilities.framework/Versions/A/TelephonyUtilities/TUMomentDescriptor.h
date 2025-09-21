@class NSURL, NSString;

@interface TUMomentDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *photoViewingAppURL;
@property (readonly, copy, nonatomic) NSString *photosAssetIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPhotosAppAssetIdentifier:(id)a0;

@end
