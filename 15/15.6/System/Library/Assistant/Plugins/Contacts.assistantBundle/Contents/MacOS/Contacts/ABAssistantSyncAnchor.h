@class NSString;

@interface ABAssistantSyncAnchor : NSObject {
    long long _sequenceNumber;
    NSString *_recordID;
}

@property (readonly, nonatomic) long long sequenceNumber;
@property (readonly, nonatomic) NSString *recordID;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) char shouldResetSync;
@property (readonly, nonatomic) char shouldFullSync;
@property (readonly, nonatomic) char shouldResumePreviousFullSync;
@property (readonly, nonatomic) char shouldDeleteSyncedRecords;

+ (id)anchorWithString:(id)a0 forAddressBook:(id)a1;
+ (id)stringValueForFullSyncWithRecordID:(id)a0;
+ (id)stringValueWithSequenceNumber:(long long)a0 recordID:(id)a1;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSequenceNumber:(long long)a0 recordID:(id)a1;

@end
