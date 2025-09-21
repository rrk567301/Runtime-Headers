@class NSArray, NSPredicate, NSSet;

@interface _DKBiomeQuery : NSObject {
    NSArray *_eventStreamNames;
    NSPredicate *_predicate;
    unsigned long long _limit;
    unsigned long long _offset;
    NSArray *_sortDescriptors;
    long long _resultType;
    NSArray *_groupByProperties;
    char _returnDistinctResults;
    char _readMetadata;
    NSSet *_excludedMetadataKeys;
}

+ (id)biomeExclusiveStreamsFromEventStreams:(id)a0;
+ (char)canShimDuetStreamNamed:(id)a0;
+ (id)deletionPredicateFromArray:(id)a0;
+ (id)duetExclusiveStreamsFromEventStreams:(id)a0;
+ (id)eventStreamsFromArray:(id)a0;
+ (id)eventStreamsFromPredicate:(id)a0;
+ (char)shimDisabled;

- (void).cxx_destruct;
- (id)_getCachedStreamForBiomeStreamIdentifier:(id)a0;
- (id)_publisherForQueryReturningIndividualResults:(char)a0 error:(id *)a1;
- (id)_publisherForStreams:(id)a0;
- (void)_setBiomeStreamWithBlock:(id /* block */)a0;
- (id)bmdkEventStreams;
- (id)executeBiomeQueryError:(id *)a0;
- (unsigned long long)executeDeletionQuery:(id *)a0;
- (id)filterExcludedMetadataWithDKEvent:(id)a0;
- (id)initWithDKEventQuery:(id)a0;
- (id)initWithDeletionArray:(id)a0;
- (id)initWithDeletionPredicate:(id)a0;
- (id)initWithEventStreams:(id)a0 predicate:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 sortDescriptors:(id)a4 resultType:(long long)a5 groupByProperties:(id)a6 returnDistinctResults:(char)a7 readMetadata:(char)a8 excludedMetadataKeys:(id)a9;
- (char)prepareQuery:(id *)a0;
- (id)publisherForQueryWithError:(id *)a0;

@end
