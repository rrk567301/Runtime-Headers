@class NSView, NSViewController;
@protocol MKActivityObserving;

@interface MUPresentationOptions : NSObject <NSCopying>

@property (retain, nonatomic) NSViewController *presentingViewController;
@property (retain, nonatomic) NSView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (retain, nonatomic) id<MKActivityObserving> progressObserver;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
