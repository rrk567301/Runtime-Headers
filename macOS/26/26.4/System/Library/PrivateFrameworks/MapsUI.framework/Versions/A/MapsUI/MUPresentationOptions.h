@class NSView, NSViewController;
@protocol MUActivityObserving;

@interface MUPresentationOptions : NSObject <NSCopying>

@property (retain, nonatomic) NSViewController *presentingViewController;
@property (retain, nonatomic) NSView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (retain, nonatomic) id<MUActivityObserving> progressObserver;
@property (nonatomic) BOOL isForActionBar;
@property (nonatomic) BOOL isForActionBarMoreMenu;

+ (id)optionsWithSender:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
