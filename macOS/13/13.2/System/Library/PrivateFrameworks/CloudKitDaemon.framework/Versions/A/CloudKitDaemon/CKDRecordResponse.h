@class NSString, CKRecordID, CKRecord;

@interface CKDRecordResponse : NSObject

@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) NSString *etag;
@property (retain, nonatomic) CKRecord *record;

- (id)description;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;

@end
