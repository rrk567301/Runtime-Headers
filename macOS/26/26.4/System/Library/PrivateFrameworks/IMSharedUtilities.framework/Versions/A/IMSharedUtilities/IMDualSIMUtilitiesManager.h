@class NSDictionary;

@interface IMDualSIMUtilitiesManager : NSObject

@property (class, readonly, nonatomic) IMDualSIMUtilitiesManager *sharedManager;

@property (retain, nonatomic) NSDictionary *conversationListSIMShortNameDictionary;

+ (id)_updateConversationListSIMShortNamesDictionary;

- (void).cxx_destruct;
- (id)init;
- (void)_handleSIMSubscriptionsUpdate;
- (id)activeSIMIDs;
- (id)shortNameForSIMLabel:(id)a0;

@end
