@protocol ATXUserEducationSuggestion;

@interface ATXUserEducationSuggestionEvent : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) id<ATXUserEducationSuggestion> userEducationSuggestion;
@property (readonly, nonatomic) unsigned long long userEducationSuggestionEventType;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUserEducationSuggestion:(id)a0 userEducationSuggestionEventType:(unsigned long long)a1;

@end
