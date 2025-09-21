@class NSString;

@interface AnnotatedCacheValue : NSObject

@property (readonly, nonatomic) NSString *annotation;
@property (readonly, nonatomic) id value;

- (void).cxx_destruct;
- (id)initWithAnnotation:(id)a0 value:(id)a1;

@end
