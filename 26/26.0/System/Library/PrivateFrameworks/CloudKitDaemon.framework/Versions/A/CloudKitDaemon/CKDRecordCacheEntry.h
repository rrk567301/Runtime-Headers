@class NSString, CKContainerID, NSData, NSDate, NSNumber, NSSet;

@interface CKDRecordCacheEntry : CKSQLiteCacheTableEntry

@property (retain, nonatomic) NSString *rowID;
@property (retain, nonatomic) CKContainerID *containerID;
@property (retain, nonatomic) NSString *recordID;
@property (retain, nonatomic) NSString *zoneIdentifier;
@property (retain, nonatomic) NSNumber *databaseScope;
@property (retain, nonatomic) NSString *etag;
@property (retain, nonatomic) NSDate *modificationTime;
@property (retain, nonatomic) NSData *recordData;
@property (retain, nonatomic) NSSet *knownUserKeys;
@property (retain, nonatomic) NSString *dsid;
@property (retain, nonatomic) NSNumber *size;

- (id)description;
- (void).cxx_destruct;

@end
