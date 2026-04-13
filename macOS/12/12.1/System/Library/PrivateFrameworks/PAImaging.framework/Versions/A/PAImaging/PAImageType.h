@interface PAImageType : NSObject <NSCopying> {
    unsigned long long _quality;
    unsigned long long _variant;
}

+ (void)initialize;
+ (id)original;
+ (id)thumbnail;
+ (id)master;
+ (id)preview;
+ (id)originalThumbnail;
+ (id)typeForQuality:(unsigned long long)a0 variant:(unsigned long long)a1;
+ (id)descriptionForQuality:(unsigned long long)a0;
+ (id)renderedVersion;
+ (id)originalGeometry;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (unsigned long long)variant;
- (unsigned long long)quality;
- (id)_initWithQuality:(unsigned long long)a0 variant:(unsigned long long)a1;
- (id)thumbnailType;
- (id)previewType;
- (id)masterType;
- (id)renderedVersionType;
- (id)qualityShortDescription;
- (BOOL)isEqualToImageType:(id)a0;

@end
