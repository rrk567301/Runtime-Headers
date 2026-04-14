@class CKRecord;

@interface _WBSCKRecordSystemEncoder : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, weak, nonatomic) CKRecord *record;

- (id)initWithRecord:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;

@end
