@protocol UINSActivityItemsConfigurationReading;

@interface UINSSharingToolbarItem : NSToolbarItem

@property (retain, nonatomic, setter=_setActivityItemsConfiguration:) id<UINSActivityItemsConfigurationReading> _activityItemsConfiguration;

- (void)validate;
- (void)setAction:(SEL)a0;
- (void)_share:(id)a0;
- (void)setTarget:(id)a0;
- (void).cxx_destruct;
- (id)initWithItemIdentifier:(id)a0;

@end
