@class NSString, NSArray;

@interface VITextBlockAnnotation : NSObject <NSCopying>

@property (nonatomic, readonly) NSString *description;
@property (readonly, nonatomic) NSArray *textAnnotations;

+ (id)empty;
+ (id)textBlockWithDocumentObservations:(id)a0;
+ (id)textBlockWithAnnotations:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithTextAnnotations:(id)a0;

@end
