@class ATXSleepSuggestionOccurrence;

@interface ATXSleepSuggestion : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) ATXSleepSuggestionOccurrence *occurrence;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOccurence:(id)a0;

@end
