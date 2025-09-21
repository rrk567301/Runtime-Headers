@class NSArray, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SGTSpotlightSuggesterReserved : NSObject {
    NSArray *attributeNames;
    NSString *baseQuery;
    NSObject<OS_dispatch_queue> *queryQueue;
    unsigned long long queryID;
    struct __MDQuery { } *query;
    struct __MDQuery { } *warmingQuery;
    NSObject<OS_dispatch_source> *warmingQueryTimer;
    NSArray *searchScope;
    NSArray *additionalAttributeNames;
    NSArray *sortingAttributeNames;
    NSMutableDictionary *shortNameToAttributes;
    NSObject<OS_dispatch_source> *fallbackTimer;
    char matchesFinderFilesOnly;
    char matchesSupportFiles;
    char runWarmingQuery;
    char canGenerateTopHits;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
