@class NSArray, NSDateInterval;

@interface SMSuggestionEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding> {
    unsigned long long _batchSize;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long fetchLimit;
@property (readonly, nonatomic) unsigned long long offset;
@property (readonly, nonatomic) char includeSuppressed;
@property (readonly, nonatomic) char sortByCreationDate;
@property (readonly, nonatomic) char ascending;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) NSArray *filteredToSuggestionTriggers;
@property (readonly, nonatomic) NSArray *filteredToSuggestionUserTypes;
@property (readonly, nonatomic) NSArray *filteredToSessionTypes;
@property (readonly, nonatomic) NSArray *filteredToSuggestionSessionTypes;

+ (id)getEnumerationOptionsForLatestSuggestionSortedByCreationDateIncludeSuppressed:(char)a0 filteredToSuggestionTriggers:(id)a1 filteredToSuggestionUserTypes:(id)a2 filteredToSessionTypes:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)batchSize;
- (Class)enumeratedType;
- (id)initWithBatchSize:(unsigned long long)a0 fetchLimit:(unsigned long long)a1 offset:(unsigned long long)a2 includeSuppressed:(char)a3 sortByCreationDate:(char)a4 ascending:(char)a5 dateInterval:(id)a6 filteredToSuggestionTriggers:(id)a7 filteredToSuggestionUserTypes:(id)a8 filteredToSessionTypes:(id)a9;
- (id)initWithIncludeSuppressed:(char)a0 sortByCreationDate:(char)a1 ascending:(char)a2 dateInterval:(id)a3 filteredToSuggestionTriggers:(id)a4 filteredToSuggestionUserTypes:(id)a5 filteredToSessionTypes:(id)a6;

@end
