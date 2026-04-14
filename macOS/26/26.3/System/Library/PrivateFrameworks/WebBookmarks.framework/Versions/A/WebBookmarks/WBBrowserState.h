@class NSArray, NSDictionary;

@interface WBBrowserState : NSObject

@property (copy, nonatomic) NSArray *pinnedTabs;
@property (copy, nonatomic) NSArray *privatePinnedTabs;
@property (copy, nonatomic) NSDictionary *pinnedTabsByProfileIdentifier;
@property (copy, nonatomic) NSArray *windowStates;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPinnedTabs:(id)a0 privatePinnedTabs:(id)a1 windowStates:(id)a2;

@end
