@class KGNodeFilter, MARelation;

@interface MANodeFilter : MAElementFilter

@property (class, readonly, nonatomic) MANodeFilter *any;

@property (readonly, nonatomic) KGNodeFilter *kgNodeFilter;
@property (readonly, nonatomic) MARelation *relation;
@property (nonatomic) char whereNoInAndOutEdges;
@property (nonatomic) char whereNoOutEdges;
@property (nonatomic) char whereNoInEdges;

+ (id)nodeFilterWithVisualString:(id)a0;
+ (char)scanInstance:(out id *)a0 withScanner:(id)a1;

- (void)appendVisualStringToString:(id)a0;
- (char)matchesNode:(id)a0;

@end
