@interface VNRecognizeDocumentElementsRequestElementConfiguration : NSObject <NSCopying>

@property BOOL recognize;
@property BOOL generateSegmentationMask;

+ (id)newConfiguration;

- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
