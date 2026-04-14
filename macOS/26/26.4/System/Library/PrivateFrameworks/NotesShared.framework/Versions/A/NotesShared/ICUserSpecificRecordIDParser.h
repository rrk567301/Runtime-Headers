@class NSString, CKRecordID;

@interface ICUserSpecificRecordIDParser : NSObject <NSCopying> {
    unsigned long long _hash;
}

@property (readonly, nonatomic) NSString *recordType;
@property (readonly, nonatomic) CKRecordID *recordID;
@property (readonly, nonatomic) NSString *sharedRecordType;
@property (readonly, nonatomic) CKRecordID *sharedRecordID;

+ (BOOL)isUserSpecificRecordID:(id)a0;
+ (BOOL)isUserSpecificRecordType:(id)a0;
+ (id)sharedRecordTypeForUserSpecificRecordType:(id)a0;
+ (id)userSpecificRecordTypeForSharedRecordType:(id)a0;

- (BOOL)validate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithRecordName:(id)a0;
- (id)initWithSharedRecordType:(id)a0 sharedRecordID:(id)a1 userRecordName:(id)a2 ownerName:(id)a3;

@end
