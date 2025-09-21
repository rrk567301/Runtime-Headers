@class NSArray, NSDictionary;

@interface WBBrowserState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *pinnedTabs;
@property (copy, nonatomic) NSArray *privatePinnedTabs;
@property (copy, nonatomic) NSDictionary *pinnedTabsByProfileIdentifier;
@property (copy, nonatomic) NSArray *windowStates;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPinnedTabs:(id)a0 privatePinnedTabs:(id)a1 windowStates:(id)a2;

@end
