@protocol UIFocusEnvironment, UIFocusItemContainer;

@interface _UIFocusEnvironmentContainerTuple : NSObject

@property (readonly, nonatomic) id<UIFocusEnvironment> owningEnvironment;
@property (readonly, nonatomic) id<UIFocusItemContainer> itemContainer;
@property (readonly, nonatomic) BOOL isScrollableContainer;

+ (id)tupleWithOwningEnvironment:(id)a0 itemContainer:(id)a1;
+ (id)tupleWithRequiredContainerFromEnvironment:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithOwningEnvironment:(id)a0 itemContainer:(id)a1;
- (BOOL)isEqualToEnvironmentContainerTuple:(id)a0;

@end
