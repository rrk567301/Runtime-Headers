@class TUConversationActivity, TUNearbySuggestion;

@interface TUNearbySuggestionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TUNearbySuggestion *suggestion;
@property (readonly, nonatomic) TUConversationActivity *selectedActivity;
@property (readonly, nonatomic) long long type;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSuggestion:(id)a0 selectedActivity:(id)a1 type:(long long)a2;

@end
