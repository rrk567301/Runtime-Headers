@protocol UIFocusEnvironment, UIFocusItemScrollableContainer;

@interface _UIFocusEnvironmentScrollableContainerTuple : NSObject

@property (readonly, nonatomic) id<UIFocusEnvironment> owningEnvironment;
@property (readonly, nonatomic) id<UIFocusItemScrollableContainer> scrollableContainer;

+ (id)tupleWithOwningEnvironment:(id)a0 scrollableContainer:(id)a1;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithOwningEnvironment:(id)a0 scrollableContainer:(id)a1;

@end
