@class NSProgress, NSArray;

@interface TSUNSProgress : TSUProgress {
    NSProgress *_NSProgress;
    NSArray *_NSProgressObservers;
}

- (id)init;
- (void).cxx_destruct;
- (void)setMessage:(id)a0;
- (id)message;
- (double)value;
- (BOOL)isIndeterminate;
- (double)maxValue;
- (id)initForSubclass;
- (id)initWithNSProgress:(id)a0;

@end
