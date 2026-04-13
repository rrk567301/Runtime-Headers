@class NSString, NSPredicate, NSArray;

@interface CKQuery : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly, copy, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSArray *sortDescriptors;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)debugDescription;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setPredicate:(id)a0;
- (id)initWithRecordType:(id)a0 predicate:(id)a1;
- (void)setRecordType:(id)a0;
- (id)CKPropertiesDescription;

@end
