@interface VNRecognizeDocumentElementsRequestElementConfiguration : NSObject <NSCopying>

@property char recognize;
@property char generateSegmentationMask;

+ (id)newConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;

@end
