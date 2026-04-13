@class NSArray, NSSet, NSPredicate, NSObject;
@protocol OS_dispatch_queue;

@interface _DKEventQuery : _DKQuery <_DKExecutableQuery, NSCopying> {
    NSObject<OS_dispatch_queue> *_defaultQueue;
}

@property long long resultType;
@property (retain) NSArray *groupByProperties;
@property (copy) id /* block */ resultsHandler;
@property BOOL returnsDistinctResults;
@property (retain) NSArray *excludedMetadataKeys;
@property (retain) NSPredicate *predicate;
@property (retain) NSArray *eventStreams;
@property (retain) NSArray *sortDescriptors;
@property unsigned long long limit;
@property unsigned long long offset;
@property BOOL readMetadata;
@property BOOL deduplicateValues;
@property (retain) NSSet *deviceIDs;

+ (void)load;
+ (BOOL)supportsSecureCoding;
+ (id)eventQueryWithPredicate:(id)a0 eventStreams:(id)a1 offset:(unsigned long long)a2 limit:(unsigned long long)a3 sortDescriptors:(id)a4;
+ (id)predicateForEventsOfMinimumDuration:(double)a0;
+ (id)expressionForEventDuration;
+ (id)eventQueryWithPredicate:(id)a0 eventStreams:(id)a1 offset:(unsigned long long)a2 limit:(unsigned long long)a3 sortDescriptors:(id)a4 resultHandler:(id /* block */)a5;
+ (id)predicateForEventsOfMaximumDuration:(double)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)executeUsingCoreDataStorage:(id)a0 error:(id *)a1;
- (id)handleResults:(id)a0 error:(id)a1;
- (id)constructFetchRequestPredicate;
- (id)initWithPredicate:(id)a0 eventStreams:(id)a1 offset:(unsigned long long)a2 limit:(unsigned long long)a3 sortDescriptors:(id)a4 resultHandler:(id /* block */)a5;

@end
