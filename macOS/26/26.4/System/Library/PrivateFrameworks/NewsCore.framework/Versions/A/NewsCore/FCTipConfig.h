@class NSString;

@interface FCTipConfig : NSObject

@property (readonly, nonatomic) long long contentShortcutsBubbleTipPresentationsQuiescenceInterval;
@property (readonly, nonatomic) long long contentShortcutsOnboardingTipMaxPresentationCount;
@property (readonly, nonatomic) long long contentShortcutsOnboardingTipQuiescenceInterval;
@property (copy, nonatomic) NSString *contentShortcutsOnboardingTipTitle;
@property (copy, nonatomic) NSString *contentShortcutsOnboardingTipBody;
@property (copy, nonatomic) NSString *contentShortcutsOnboardingTipIconUrl;
@property (readonly, nonatomic) long long maxLocalHubLocationsBubbleTipPresentations;
@property (readonly, nonatomic) long long localHubLocationsBubbleTipPresentationsQuiescenceInterval;
@property (copy, nonatomic) NSString *localHubLocationsBubbleTipTitle;
@property (copy, nonatomic) NSString *localHubLocationsBubbleTipBody;
@property (copy, nonatomic) NSString *localHubLocationsBubbleTipIconUrl;
@property (readonly, nonatomic) long long maxLocalHubAutoFollowEnticeBubbleTipPresentations;
@property (readonly, nonatomic) long long localHubAutoFollowEnticeBubbleTipPresentationsQuiescenceInterval;
@property (copy, nonatomic) NSString *localHubAutoFollowEnticeBubbleTipTitle;
@property (copy, nonatomic) NSString *localHubAutoFollowEnticeBubbleTipBody;
@property (copy, nonatomic) NSString *localHubAutoFollowEnticeBubbleTipIconUrl;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
