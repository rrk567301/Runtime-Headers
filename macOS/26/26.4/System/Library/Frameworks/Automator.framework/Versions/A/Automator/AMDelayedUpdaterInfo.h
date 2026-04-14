@interface AMDelayedUpdaterInfo : NSObject

@property (readonly) id updater;
@property (readonly) SEL selector;
@property (readonly) id argument;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithUpdater:(id)a0 selector:(SEL)a1 object:(id)a2;

@end
