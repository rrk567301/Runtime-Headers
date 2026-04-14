@class NSTimer, NSMutableArray, NSMutableDictionary;

@interface NSControlGestureRecognizer : NSPressGestureRecognizer {
    NSMutableDictionary *_infos;
}

@property BOOL _postNotifications;
@property BOOL _previousPointDidHitTest;
@property BOOL _okToTrack;
@property (retain) NSTimer *_periodicTimer;
@property (retain) NSMutableArray *_completionBlocks;
@property BOOL hasPressure;
@property (readonly) long long clickCount;
@property (readonly) double timestamp;
@property (readonly) unsigned long long modifierFlags;
@property struct CGPoint { double x; double y; } _lastPoint;

- (void)mouseDown:(id)a0;
- (void)_resetGestureRecognizer;
- (void)mouseUp:(id)a0;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)dealloc;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (void)addCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setInfo:(id)a0 forKey:(id)a1;
- (BOOL)preventsPreKeyEquivalentRouting;
- (BOOL)_canBeCancelledByGestureRecognizer:(id)a0;
- (id)infoForKey:(id)a0;

@end
