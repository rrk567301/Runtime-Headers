@interface IMManualUpdater : NSObject {
    unsigned char _needsUpdate : 1;
}

@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (nonatomic) char needsUpdate;

- (id)description;
- (void).cxx_destruct;
- (void)setNeedsUpdate:(char)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (char)needsUpdate;
- (void)setNeedsUpdate;
- (void)updateIfNeeded;

@end
