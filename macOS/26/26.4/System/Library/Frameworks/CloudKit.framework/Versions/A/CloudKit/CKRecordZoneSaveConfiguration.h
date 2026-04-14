@class NSArray, CKRecordZone;

@interface CKRecordZoneSaveConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CKRecordZone *recordZone;
@property (readonly, nonatomic) NSArray *sourceAncestors;
@property (readonly, nonatomic) NSArray *destinationAncestors;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithRecordZone:(id)a0 sourceAncestors:(id)a1 destinationAncestors:(id)a2 error:(id *)a3;

@end
