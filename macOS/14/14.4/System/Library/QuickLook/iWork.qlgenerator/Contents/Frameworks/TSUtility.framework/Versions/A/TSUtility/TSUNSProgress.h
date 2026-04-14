@class NSProgress, NSArray;

@interface TSUNSProgress : TSUProgress {
    NSProgress *_NSProgress;
    NSArray *_NSProgressObservers;
}

- (id)init;
- (void).cxx_destruct;
- (id)message;
- (void)setMessage:(id)a0;
- (BOOL)isIndeterminate;
- (double)value;
- (double)maxValue;
- (id)initForSubclass;
- (id)initWithNSProgress:(id)a0;

@end
