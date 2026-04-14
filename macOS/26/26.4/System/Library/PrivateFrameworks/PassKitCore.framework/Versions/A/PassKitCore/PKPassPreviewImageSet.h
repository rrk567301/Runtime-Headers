@class PKImage, NSData;

@interface PKPassPreviewImageSet : PKPassImageSet {
    PKImage *_iconImage1x;
    PKImage *_iconImage2x;
}

@property (retain, nonatomic) PKImage *iconImage;
@property (retain, nonatomic) PKImage *notificationIconImage;
@property (retain, nonatomic) PKImage *rawIcon;
@property (retain, nonatomic) NSData *iconImageICNSData;

+ (unsigned int)currentVersion;
+ (BOOL)supportsSecureCoding;
+ (id)archiveName;
+ (long long)imageSetType;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithDisplayProfile:(id)a0 fileURL:(id)a1 screenScale:(double)a2 suffix:(id)a3;
- (void)preheatImages;

@end
