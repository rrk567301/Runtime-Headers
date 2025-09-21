@protocol TSKAnnotation;

@interface TSAAnnotationReference : NSObject

@property (retain, nonatomic) id<TSKAnnotation> annotation;
@property (nonatomic) unsigned long long pageIndex;

- (void).cxx_destruct;
- (char)isValidAndInDocument;
- (char)referencesAnnotation:(id)a0;

@end
