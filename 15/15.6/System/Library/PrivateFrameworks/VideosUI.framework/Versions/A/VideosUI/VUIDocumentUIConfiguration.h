@class NSString;

@interface VUIDocumentUIConfiguration : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *viewControllerIdentifier;
@property (copy, nonatomic) NSString *viewControllerDocumentIdentifier;
@property (nonatomic, getter=isAnimated) char animated;
@property (nonatomic, getter=isNavigationBarHidden) char navigationBarHidden;
@property (nonatomic, getter=isNavigationBarAdjustedToSizeClass) char navigationBarAdjustedToSizeClass;
@property (nonatomic, getter=isInteractivePopGestureAllowed) char isInteractivePopGestureAllowed;
@property (copy, nonatomic) NSString *loadingViewText;
@property (nonatomic, getter=prefersLargeTitle) char prefersLargeTitle;
@property (copy, nonatomic) NSString *navigationTitle;
@property (nonatomic, getter=isComingFromExtras) char isComingFromExtras;
@property (nonatomic, getter=isComingFromRoot) char isComingFromRoot;
@property (nonatomic) char shouldWrapModalInNavigationController;

+ (struct CGSize { double x0; double x1; })_preferredSizeFromConfig:(id)a0;
+ (long long)_presentationTypeFromString:(id)a0;
+ (id)uiConfigurationWithDict:(id)a0;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
