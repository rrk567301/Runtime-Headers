@class PKImage, NSData;

@interface PKPassPreviewImageSet : PKPassImageSet {
    PKImage *_iconImage1x;
    PKImage *_iconImage2x;
}

@property (retain, nonatomic) PKImage *iconImage;
@property (retain, nonatomic) PKImage *notificationIconImage;
@property (retain, nonatomic) PKImage *rawIcon;
@property (retain, nonatomic) NSData *iconImageICNSData;

+ (BOOL)supportsSecureCoding;
+ (unsigned int)currentVersion;
+ (long long)imageSetType;
+ (id)archiveName;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDisplayProfile:(id)a0 fileURL:(id)a1 screenScale:(double)a2 suffix:(id)a3;
- (void)preheatImages;

@end
