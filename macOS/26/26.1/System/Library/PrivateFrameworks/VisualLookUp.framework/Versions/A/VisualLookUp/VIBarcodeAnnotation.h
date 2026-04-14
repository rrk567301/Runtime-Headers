@class NSArray;

@interface VIBarcodeAnnotation : NSObject

@property (readonly, copy, nonatomic) NSArray *annotationItems;

+ (id)annotationFromObservations:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithAnnotationItems:(id)a0;

@end
