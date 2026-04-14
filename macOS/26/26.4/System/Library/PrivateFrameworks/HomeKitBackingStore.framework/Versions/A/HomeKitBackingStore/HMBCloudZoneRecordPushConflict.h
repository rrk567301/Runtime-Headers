@class CKRecordID, CKRecord;

@interface HMBCloudZoneRecordPushConflict : HMFObject

@property (readonly) CKRecordID *recordID;
@property (readonly) CKRecord *clientRecord;
@property (readonly) CKRecord *serverRecord;
@property (readonly) CKRecord *ancestorRecord;

- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithRecordID:(id)a0 clientRecord:(id)a1 serverRecord:(id)a2 ancestorRecord:(id)a3;
- (id)initWithRecordID:(id)a0 error:(id)a1;

@end
