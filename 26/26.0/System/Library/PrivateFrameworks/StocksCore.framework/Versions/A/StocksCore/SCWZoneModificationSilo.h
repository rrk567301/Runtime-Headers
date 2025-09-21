@class NSMutableDictionary, SCWZoneDiff, SCWZoneSchema, NSMutableArray;

@interface SCWZoneModificationSilo : NSObject <SCWZoneModifying>

@property (retain, nonatomic) SCWZoneSchema *zoneSchema;
@property (retain, nonatomic) NSMutableDictionary *originalRecordsByID;
@property (retain, nonatomic) NSMutableDictionary *workingRecordsByID;
@property (retain, nonatomic) NSMutableDictionary *recordsToSaveByID;
@property (retain, nonatomic) NSMutableArray *deletedRecordIDs;
@property (readonly, copy, nonatomic) SCWZoneDiff *diff;

- (void)deleteRecordWithName:(id)a0;
- (BOOL)recordExistsWithName:(id)a0;
- (void)createOrUpdateRecordWithName:(id)a0 recordType:(id)a1 modifyBlock:(id /* block */)a2;
- (BOOL)_shouldAssertRecordValidity;
- (id)initWithZoneSchema:(id)a0 contents:(id)a1;
- (void).cxx_destruct;

@end
