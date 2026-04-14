@class NSProgress, NSArray;

@interface TSUNSProgress : TSUProgress {
    NSProgress *_NSProgress;
    NSArray *_NSProgressObservers;
}

- (void)setMessage:(id)a0;
- (double)value;
- (id)message;
- (id)init;
- (BOOL)isIndeterminate;
- (double)maxValue;
- (void).cxx_destruct;
- (id)initForSubclass;
- (id)initWithNSProgress:(id)a0;

@end
