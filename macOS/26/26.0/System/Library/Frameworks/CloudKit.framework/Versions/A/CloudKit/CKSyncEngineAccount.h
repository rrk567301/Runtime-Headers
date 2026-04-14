@class CKAccountInfo, CKRecordID, NSString;

@interface CKSyncEngineAccount : NSObject <NSCopying, NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ _wrapped;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) CKAccountInfo *accountInfo;
@property (nonatomic, retain) CKRecordID *userRecordID;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccountInfo:(id)a0 userRecordID:(id)a1;

@end
