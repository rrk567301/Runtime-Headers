@class NSArray, NSMutableArray;

@interface _NSSidecarTouchFilter : NSObject {
    NSArray *_recognizers;
    NSMutableArray *_activeRecognizers;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleCGEvent:(struct __CGEvent { } *)a0 hidEvent:(struct __IOHIDEvent { } *)a1;
- (void)updateActiveRecognizers;

@end
