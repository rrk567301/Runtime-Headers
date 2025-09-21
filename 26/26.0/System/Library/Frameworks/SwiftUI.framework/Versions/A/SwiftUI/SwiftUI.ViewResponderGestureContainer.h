@class NSString, NSArray, NSView, NSWindow;
@protocol NSGestureRecognizerContainer;

@interface SwiftUI.ViewResponderGestureContainer : NSResponder <NSGestureRecognizerContainer> {
    void /* unknown type, empty encoding */ responder;
    void /* unknown type, empty encoding */ subgraphObserver;
    void /* unknown type, empty encoding */ registeredGestureRecognizers;
    void /* unknown type, empty encoding */ _actingParentContainer;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *gestureRecognizers;
@property (nonatomic, readonly) id<NSGestureRecognizerContainer> _parentGestureRecognizerContainer;
@property (nonatomic, readonly) NSArray *_childGestureRecognizerContainers;
@property (nonatomic, readonly) NSWindow *_eventReceivingWindow;
@property (nonatomic, readonly) NSView *_proxyView;

- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)_compareGestureRecognizerContainer:(id)a0;

@end
