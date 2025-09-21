@interface VUIModalPresentationConfiguration : NSObject

@property (nonatomic) long long type;
@property (nonatomic) char allowsModalOverModal;
@property (nonatomic, getter=isMenuDismissable) char menuDismissable;
@property (nonatomic, getter=isNavigationBarHidden) char navigationBarHidden;
@property (nonatomic, getter=isAnimated) char animated;

+ (id)presentationTypeKeyMap;

- (id)init;
- (id)initWithOptions:(id)a0;

@end
