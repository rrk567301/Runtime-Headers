@class NSString;

@interface FCTipConfig : NSObject

@property (readonly, nonatomic) long long curatedShortcutsBubbleTipPresentationsQuiescenceInterval;
@property (readonly, nonatomic) long long contentShortcutsOnboardingTipMaxPresentationCount;
@property (readonly, nonatomic) long long contentShortcutsOnboardingTipQuiescenceInterval;
@property (copy, nonatomic) NSString *contentShortcutsOnboardingTipTitle;
@property (copy, nonatomic) NSString *contentShortcutsOnboardingTipBody;
@property (copy, nonatomic) NSString *contentShortcutsOnboardingTipIconUrl;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
