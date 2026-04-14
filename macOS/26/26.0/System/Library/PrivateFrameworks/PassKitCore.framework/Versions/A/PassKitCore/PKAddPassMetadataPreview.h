@class NSString, PKImage, NSURL;

@interface PKAddPassMetadataPreview : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGImage { } *passThumbnailImage;
@property (retain, nonatomic) NSString *localizedDescription;
@property (retain, nonatomic) PKImage *pkPassThumbnailImage;
@property (retain, nonatomic) NSURL *thumbnailURL;

+ (id)previewWithPassThumbnail:(struct CGImage { } *)a0 localizedDescription:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_extendableDescription:(id)a0;
- (id)initWithPassThumbnail:(struct CGImage { } *)a0 localizedDescription:(id)a1;

@end
