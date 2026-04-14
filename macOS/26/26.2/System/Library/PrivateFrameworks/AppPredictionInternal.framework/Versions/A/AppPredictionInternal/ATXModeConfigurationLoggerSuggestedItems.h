@class NSMutableSet;

@interface ATXModeConfigurationLoggerSuggestedItems : NSObject

@property (retain, nonatomic) NSMutableSet *suggestedDeniedApps;
@property (retain, nonatomic) NSMutableSet *suggestedAllowedApps;
@property (retain, nonatomic) NSMutableSet *suggestedDeniedContacts;
@property (retain, nonatomic) NSMutableSet *suggestedAllowedContacts;

- (void).cxx_destruct;
- (id)init;

@end
