@class UXCollectionViewLayout;
@protocol UXCollectionViewLayoutProxyDelegate;

@interface _UXCollectionViewLayoutProxy : NSObject

@property (nonatomic) id<UXCollectionViewLayoutProxyDelegate> delegate;
@property (readonly, nonatomic) UXCollectionViewLayout *layout;

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;
+ (Class)class;

- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithLayout:(id)a0;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)a0;
- (Class)class;

@end
