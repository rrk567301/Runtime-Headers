@class NSDictionary, NSArray;

@interface DESRecordSet : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *nativeRecords;
@property (readonly, copy, nonatomic) NSDictionary *nativeRecordInfo;
@property (readonly, copy, nonatomic) NSArray *coreDuetEvents;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSDictionary *predicate;

+ (id)recordSetWithRecipeType:(id)a0 nativeRecords:(id)a1 coreDuetEventsUUIDs:(id)a2 error:(id *)a3;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)filteredRecordSetWithJSONPredicate:(id)a0;
- (id)nativeRecordDataForRecordUUID:(id)a0 error:(id *)a1;
- (id)nativeRecordInfoForRecordUUID:(id)a0;

@end
