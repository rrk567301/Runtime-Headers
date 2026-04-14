@class NSProgress, NSArray;

@interface TSUNSProgress : TSUProgress {
    NSProgress *_NSProgress;
    NSArray *_NSProgressObservers;
}

- (void)setMessage:(id)a0;
- (double)maxValue;
- (void).cxx_destruct;
- (id)init;
- (double)value;
- (BOOL)isIndeterminate;
- (id)message;
- (id)initForSubclass;
- (id)initWithNSProgress:(id)a0;

@end
