@class NSArray, NSSet, NSPredicate, NSObject;
@protocol OS_dispatch_queue;

@interface _DKEventQuery : _DKQuery <_DKExecutableQuery, NSCopying> {
    NSObject<OS_dispatch_queue> *_defaultQueue;
}

@property long long resultType;
@property (retain) NSArray *groupByProperties;
@property (copy) id /* block */ resultsHandler;
@property char returnsDistinctResults;
@property (retain) NSArray *excludedMetadataKeys;
@property char disableBiomeShim;
@property (retain) NSPredicate *predicate;
@property (retain) NSArray *eventStreams;
@property (retain) NSArray *sortDescriptors;
@property unsigned long long limit;
@property unsigned long long offset;
@property char readMetadata;
@property char deduplicateValues;
@property (retain) NSSet *deviceIDs;

+ (char)supportsSecureCoding;
+ (id)onlyLocalDevice;
+ (id)allDevices;
+ (id)constructFetchRequestPredicateForEventStreams:(id)a0 predicate:(id)a1 deviceIDs:(id)a2;
+ (id)eventQueryWithPredicate:(id)a0 eventStreams:(id)a1 offset:(unsigned long long)a2 limit:(unsigned long long)a3 sortDescriptors:(id)a4;
+ (id)eventQueryWithPredicate:(id)a0 eventStreams:(id)a1 offset:(unsigned long long)a2 limit:(unsigned long long)a3 sortDescriptors:(id)a4 resultHandler:(id /* block */)a5;
+ (id)expressionForEventDuration;
+ (id)onlyRemoteDevice;
+ (id)predicateForEventsOfMaximumDuration:(double)a0;
+ (id)predicateForEventsOfMinimumDuration:(double)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)constructFetchRequestPredicate;
- (id)executeUsingCoreDataStorage:(id)a0 error:(id *)a1;
- (id)explicitEventStreamsOrEventStreamsInPredicate;
- (id)handleResults:(id)a0 error:(id)a1;
- (id)initWithPredicate:(id)a0 eventStreams:(id)a1 offset:(unsigned long long)a2 limit:(unsigned long long)a3 sortDescriptors:(id)a4 resultHandler:(id /* block */)a5;

@end
