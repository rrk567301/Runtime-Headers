@class NSProgress, NSArray;

@interface TSUNSProgress : TSUProgress {
    NSProgress *_NSProgress;
    NSArray *_NSProgressObservers;
}

- (void)setMessage:(id)a0;
- (double)maxValue;
- (BOOL)isIndeterminate;
- (void).cxx_destruct;
- (double)value;
- (id)init;
- (id)message;
- (id)initForSubclass;
- (id)initWithNSProgress:(id)a0;

@end
