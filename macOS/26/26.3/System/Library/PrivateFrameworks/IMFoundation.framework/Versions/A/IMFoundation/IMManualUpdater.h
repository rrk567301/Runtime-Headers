@interface IMManualUpdater : NSObject {
    unsigned char _needsUpdate : 1;
}

@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (nonatomic) BOOL needsUpdate;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)needsUpdate;
- (id)description;
- (void).cxx_destruct;
- (void)setNeedsUpdate:(BOOL)a0;
- (void)setNeedsUpdate;
- (void)updateIfNeeded;

@end
