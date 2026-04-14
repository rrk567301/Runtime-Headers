@class NSCountedSet;

@interface IMScheduledUpdater : IMManualUpdater

@property (retain, nonatomic) NSCountedSet *holdingUpdatesKeys;

- (void)invalidate;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setNeedsUpdate;
- (void)updateIfNeeded;
- (void)beginHoldingUpdatesForKey:(id)a0;
- (void)endHoldingUpdatesForAllKeys;
- (void)endHoldingUpdatesForKey:(id)a0;
- (BOOL)isHoldingUpdates;
- (BOOL)isHoldingUpdatesForKey:(id)a0;

@end
