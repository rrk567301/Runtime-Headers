@class NSString, MSVisitedLocation, NSDate;

@interface MSVisit : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _hidden;
    void /* unknown type, empty encoding */ _startDate;
    void /* unknown type, empty encoding */ _visitClassification;
    void /* unknown type, empty encoding */ _location;
}

@property (class, nonatomic, readonly) NSString *key;
@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic) BOOL hidden;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic) short visitClassification;
@property (nonatomic, retain) MSVisitedLocation *location;

+ (BOOL)beforeFetchWithStore:(id)a0 context:(id)a1 error:(id *)a2;
+ (BOOL)mergeDuplicatesWithStore:(id)a0 context:(id)a1 error:(id *)a2;
+ (BOOL)pruneVisitsWithContext:(id)a0 error:(id *)a1;
+ (id)retentionDate;

- (void).cxx_destruct;
- (id)initWithHidden:(BOOL)a0 startDate:(id)a1 visitClassification:(short)a2;
- (id)initWithObject:(id)a0 store:(id)a1 lazyLoad:(BOOL)a2 parent:(BOOL)a3;
- (id)initWithStore:(id)a0 hidden:(BOOL)a1 startDate:(id)a2 visitClassification:(short)a3;
- (void)removeVisit;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0 lazyLoad:(BOOL)a1 parent:(BOOL)a2;

@end
