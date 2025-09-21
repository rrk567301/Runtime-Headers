@protocol _FEFocusItemContainer, _FEFocusEnvironment;

@interface _FEFocusEnvironmentContainerTuple : NSObject

@property (readonly, nonatomic) id<_FEFocusEnvironment> owningEnvironment;
@property (readonly, nonatomic) id<_FEFocusItemContainer> itemContainer;
@property (readonly, nonatomic) char isScrollableContainer;

+ (id)tupleWithOwningEnvironment:(id)a0 itemContainer:(id)a1;
+ (id)tupleWithRequiredContainerFromEnvironment:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithOwningEnvironment:(id)a0 itemContainer:(id)a1;
- (char)isEqualToEnvironmentContainerTuple:(id)a0;

@end
