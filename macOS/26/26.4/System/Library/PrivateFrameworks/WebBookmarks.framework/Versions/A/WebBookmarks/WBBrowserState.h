@class NSArray, NSDictionary;

@interface WBBrowserState : NSObject

@property (copy, nonatomic) NSArray *pinnedTabs;
@property (copy, nonatomic) NSArray *privatePinnedTabs;
@property (copy, nonatomic) NSDictionary *pinnedTabsByProfileIdentifier;
@property (copy, nonatomic) NSArray *windowStates;

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithPinnedTabs:(id)a0 privatePinnedTabs:(id)a1 windowStates:(id)a2;

@end
