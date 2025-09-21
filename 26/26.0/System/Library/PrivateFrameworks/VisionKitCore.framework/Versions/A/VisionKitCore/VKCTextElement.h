@class NSArray;

@interface VKCTextElement : VKCBaseElement

@property (copy, nonatomic) NSArray *_children;
@property (copy, nonatomic) NSArray *components;
@property (copy, nonatomic) NSArray *candidates;
@property (nonatomic) BOOL childrenCreated;

+ (id)textElementFromCROutputRegion:(id)a0 parentDocument:(id)a1;

- (long long)elementType;
- (id)children;
- (void).cxx_destruct;
- (void)createChildrenIfNecessary;
- (BOOL)isInspectableCellSelectable;

@end
