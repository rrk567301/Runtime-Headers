@class NSString;

@interface SGTDateSuggestion : SGTSuggestion {
    NSString *_shortDisplayName;
}

+ (void)initialize;
+ (unsigned long long)_minimalUsefulDateLength;
+ (id)_dateComponentsMatchingMonthAndYear:(id)a0 formatter:(id)a1;
+ (id)_componentsWithComponents:(id)a0 prefersFuture:(BOOL)a1 retry:(BOOL)a2;
+ (id)dateComponentsRangeForDateComponents:(id)a0;
+ (id)rangeStringForDateComponentsRange:(id)a0;
+ (id)dateComponentsRangeForISODateRange:(id)a0;
+ (id)_humanDateRangesMatchingInput:(id)a0 prefersFuture:(BOOL)a1;
+ (id)_humanDateRangeWithName:(id)a0;
+ (id)_dateComponentsMatchingInput:(id)a0 string:(id)a1;
+ (id)componentsWithComponents:(id)a0 prefersFuture:(BOOL)a1;
+ (id)rangeStringForDateComponents:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)_identifier;
- (id)_propertyListRepresentation;
- (id)scopes;
- (id)dateComponentsRange;
- (id)queryStringFragment;
- (id)displayNameForScope:(long long)a0;
- (id)_shorterDisplayName;
- (BOOL)_shouldNotBeIncludedInRecents;
- (id)tokenTitle;
- (id)humanDateRange;
- (id)initWithISODateRange:(id)a0 scope:(long long)a1 attributeNames:(id)a2;
- (id)initWithHumanDateRange:(id)a0 scope:(long long)a1 attributeNames:(id)a2;
- (id)initWithDateComponents:(id)a0 scope:(long long)a1 attributeNames:(id)a2;

@end
