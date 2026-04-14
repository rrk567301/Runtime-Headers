@interface IMManualUpdater : NSObject {
    unsigned char _needsUpdate : 1;
}

@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (nonatomic) BOOL needsUpdate;

- (id)description;
- (void).cxx_destruct;
- (BOOL)needsUpdate;
- (void)setNeedsUpdate:(BOOL)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)setNeedsUpdate;
- (void)updateIfNeeded;

@end
