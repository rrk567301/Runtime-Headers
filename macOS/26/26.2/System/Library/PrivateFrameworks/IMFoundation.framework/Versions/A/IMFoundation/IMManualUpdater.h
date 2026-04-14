@interface IMManualUpdater : NSObject {
    unsigned char _needsUpdate : 1;
}

@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (nonatomic) BOOL needsUpdate;

- (void)setNeedsUpdate;
- (BOOL)needsUpdate;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (id)description;
- (void)setNeedsUpdate:(BOOL)a0;
- (void)updateIfNeeded;

@end
