@interface PAImageType : NSObject <NSCopying> {
    unsigned long long _quality;
    unsigned long long _variant;
}

+ (id)master;
+ (void)initialize;
+ (id)original;
+ (id)thumbnail;
+ (id)preview;
+ (id)renderedVersion;
+ (id)descriptionForQuality:(unsigned long long)a0;
+ (id)originalGeometry;
+ (id)originalThumbnail;
+ (id)typeForQuality:(unsigned long long)a0 variant:(unsigned long long)a1;

- (unsigned long long)quality;
- (unsigned long long)variant;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)thumbnailType;
- (id)_initWithQuality:(unsigned long long)a0 variant:(unsigned long long)a1;
- (BOOL)isEqualToImageType:(id)a0;
- (id)masterType;
- (id)previewType;
- (id)qualityShortDescription;
- (id)renderedVersionType;

@end
