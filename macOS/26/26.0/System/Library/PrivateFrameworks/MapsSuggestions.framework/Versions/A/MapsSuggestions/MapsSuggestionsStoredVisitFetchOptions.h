@class NSSet, NSDateInterval, NSString, NSNumber;

@interface MapsSuggestionsStoredVisitFetchOptions : NSObject <MapsSuggestionsObject>

@property (readonly, nonatomic) BOOL ascending;
@property (readonly, nonatomic) long long confidence;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) BOOL labelVisit;
@property (readonly, nonatomic) NSNumber *limit;
@property (readonly, nonatomic) NSSet *sources;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAscending:(BOOL)a0 confidence:(long long)a1 dateInterval:(id)a2 labelVisit:(BOOL)a3 limit:(id)a4;
- (id)initWithAscending:(BOOL)a0 confidence:(long long)a1 dateInterval:(id)a2 labelVisit:(BOOL)a3 limit:(id)a4 sources:(id)a5;
- (void).cxx_destruct;
- (id)initWithRTStoredVisitFetchOptions:(id)a0;
- (id)rtStoredVisitFetchOptions;

@end
