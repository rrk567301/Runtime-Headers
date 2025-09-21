@class NSArray, NSDateInterval;

@interface RTLearnedPlaceTypeInferenceEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding> {
    unsigned long long _batchSize;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long fetchLimit;
@property (readonly, nonatomic) unsigned long long offset;
@property (readonly, nonatomic) char sortByCreationDate;
@property (readonly, nonatomic) char ascending;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) NSArray *filteredToPlaceTypes;
@property (readonly, nonatomic) NSArray *filteredToLearnedPlaceIdentifiers;
@property (readonly, nonatomic) NSArray *filteredToIdentifiers;
@property (readonly, nonatomic) NSArray *filteredToSessionIds;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)batchSize;
- (Class)enumeratedType;
- (id)initWithBatchSize:(unsigned long long)a0 fetchLimit:(unsigned long long)a1 offset:(unsigned long long)a2 dateInterval:(id)a3 sortByCreationDate:(char)a4 ascending:(char)a5 filteredToPlaceTypes:(id)a6 filteredToIdentifiers:(id)a7 filteredToSessionIds:(id)a8 filteredToLearnedPlaceIdentifiers:(id)a9;
- (id)initWithDateInterval:(id)a0 sortByCreationDate:(char)a1 ascending:(char)a2 filteredToPlaceTypes:(id)a3 filteredToIdentifiers:(id)a4 filteredToSessionIds:(id)a5 filteredToLearnedPlaceIdentifiers:(id)a6;

@end
