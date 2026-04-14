@class NSMutableDictionary;

@interface CKDArchiveRecordsURLRequest : CKDURLRequest

@property (retain, nonatomic) NSMutableDictionary *zoneIDToRecordIDs;
@property (retain, nonatomic) NSMutableDictionary *recordZoneIDByRequestID;
@property (copy, nonatomic) id /* block */ recordArchivedBlock;

- (id)zoneIDsToLock;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)generateRequestOperations;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (void)fillOutRequestProperties:(id)a0;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 recordIDsToArchive:(id)a1;

@end
