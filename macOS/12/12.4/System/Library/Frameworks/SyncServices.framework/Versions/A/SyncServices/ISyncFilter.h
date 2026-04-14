@interface ISyncFilter : NSObject

+ (id)filterRejectingLocalRecordsAndMatchingAllFilters:(id)a0 shouldApplyUnsupportedRecords:(BOOL)a1;
+ (id)filterMatchingAllFilters:(id)a0 shouldApplyUnsupportedRecords:(BOOL)a1;
+ (id)filterRejectingLocalRecords:(id)a0;
+ (id)filterMatchingAllFilters:(id)a0;
+ (id)filterMatchingAtLeastOneFilter:(id)a0;
+ (id)filterMatchingAtLeastOneFilter:(id)a0 shouldApplyUnsupportedRecords:(BOOL)a1;
+ (id)filterAlwaysAcceptingRecordsWithEntityNames:(id)a0;

@end
