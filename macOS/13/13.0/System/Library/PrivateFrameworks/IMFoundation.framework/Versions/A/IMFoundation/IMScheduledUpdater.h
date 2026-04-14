@class NSCountedSet;

@interface IMScheduledUpdater : IMManualUpdater

@property (retain, nonatomic) NSCountedSet *holdingUpdatesKeys;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)setNeedsUpdate;
- (void)updateIfNeeded;
- (void)beginHoldingUpdatesForKey:(id)a0;
- (void)endHoldingUpdatesForKey:(id)a0;
- (void)endHoldingUpdatesForAllKeys;
- (BOOL)isHoldingUpdates;
- (BOOL)isHoldingUpdatesForKey:(id)a0;

@end
