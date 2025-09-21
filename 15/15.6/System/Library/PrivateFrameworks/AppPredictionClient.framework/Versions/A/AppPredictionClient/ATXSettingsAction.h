@class NSURL, NSDate, ATXProactiveSuggestion, LNAction;

@interface ATXSettingsAction : NSObject <NSSecureCoding> {
    NSURL *_navigationLink;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) LNAction *linkAction;
@property (readonly, nonatomic) ATXProactiveSuggestion *proactiveSuggestion;
@property (readonly, nonatomic) NSURL *navigationLink;
@property (readonly, nonatomic) NSDate *date;

+ (char)isActionEligibleForSettingsSuggestions:(id)a0;
+ (char)isActionEligibleForSettingsSuggestionsWithBundleIdentifier:(id)a0 actionIdentifier:(id)a1;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAction:(id)a0;
- (id)initWithAction:(id)a0 date:(id)a1;
- (id)initWithNavigationLink:(id)a0;
- (id)initWithProactiveSuggestion:(id)a0;
- (id)initWithProactiveSuggestion:(id)a0 action:(id)a1 date:(id)a2 navigationLink:(id)a3;
- (char)isEqualToATXSettingsAction:(id)a0;

@end
