@class NSProgress, NSArray;

@interface TSUNSProgress : TSUProgress {
    NSProgress *_NSProgress;
    NSArray *_NSProgressObservers;
}

- (void)setMessage:(id)a0;
- (id)message;
- (double)maxValue;
- (double)value;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isIndeterminate;
- (id)initForSubclass;
- (id)initWithNSProgress:(id)a0;

@end
