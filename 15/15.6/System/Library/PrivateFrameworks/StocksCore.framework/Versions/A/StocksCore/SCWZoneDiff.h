@class NSArray;

@interface SCWZoneDiff : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *modifiedRecords;
@property (readonly, copy, nonatomic) NSArray *deletedRecordIDs;
@property (readonly, nonatomic, getter=isEmpty) char empty;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)applyToRecords:(id)a0;
- (void)applyToModifyRecordsOperation:(id)a0;
- (char)hasSameBaseAsDiff:(id)a0;
- (id)initWithModifiedRecords:(id)a0 deletedRecordIDs:(id)a1;

@end
