@class NSString;

@interface ABActionSocialProfile : NSObject <ABActionDelegate>

@property (readonly) NSString *actionProperty;

- (id)unlocalizedTitle;
- (id)titleForPerson:(id)a0 identifier:(id)a1;
- (void)performActionForPerson:(id)a0 identifier:(id)a1;
- (BOOL)shouldEnableActionForPerson:(id)a0 identifier:(id)a1;
- (id)_actionURLForProfile:(id)a0;
- (id)_standardURLForProfile:(id)a0;
- (id)_localizationStringKeyForProfile:(id)a0;

@end
