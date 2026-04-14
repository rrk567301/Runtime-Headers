@class NSData, NSString, NSArray;

@interface HMCameraClipVideoAssetContext : HMCameraClipAssetContext <HMFObject, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSData *hlsPlaylist;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 expirationDate:(id)a1 requiredHTTPHeaders:(id)a2 hlsPlaylist:(id)a3;
- (id)initWithURL:(id)a0 expirationDate:(id)a1 requiredHTTPHeaders:(id)a2 videoSegments:(id)a3 hlsPlaylist:(id)a4;

@end
