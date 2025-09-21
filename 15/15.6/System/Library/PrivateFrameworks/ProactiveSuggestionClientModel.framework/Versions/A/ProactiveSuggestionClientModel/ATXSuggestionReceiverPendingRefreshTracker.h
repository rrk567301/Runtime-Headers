@class NSMutableSet, NSMutableDictionary;

@interface ATXSuggestionReceiverPendingRefreshTracker : NSObject

@property (retain, nonatomic) NSMutableSet *clientModelsThatUpdatedSuggestions;
@property (nonatomic) char shouldForceRefreshForAllUIs;
@property (retain, nonatomic) NSMutableDictionary *registeredDelegatesForClientModels;
@property (retain, nonatomic) NSMutableDictionary *requestUUIDToClientModelCaches;

- (id)init;
- (void).cxx_destruct;

@end
