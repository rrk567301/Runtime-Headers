@class NSString, NSData, NSDate, NSURL;

@interface AXMPhotoAssetData : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *assetLocalIdentifier;
@property (retain, nonatomic) NSData *assetImageData;
@property (retain, nonatomic) NSString *assetUTI;
@property (retain, nonatomic) NSDate *assetCreationDate;
@property (retain, nonatomic) NSURL *assetURL;
@property (nonatomic) unsigned int assetOrientation;
@property (nonatomic) char allowNetworkAccess;
@property (retain, nonatomic) NSURL *photoLibraryURL;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) NSString *UTI;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) unsigned int orientation;

+ (id)_photoAuthorizationMessage:(long long)a0;
+ (id)phAssetFromLocalIdentifier:(id)a0 photoLibraryURL:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithImageAssetLocalIdentifier:(id)a0 photoLibraryURL:(id)a1 allowsNetworkAccess:(char)a2 needsImageData:(char)a3;
- (void)updateAssetDetails;

@end
