@class NSString, NSArray, NSPredicate, CKRoughlyEquivalentProperties;

@interface CKQuery : NSObject <CKRoughlyEquivalent, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *recordType;
@property (readonly, copy) NSPredicate *predicate;
@property (copy) NSArray *sortDescriptors;
@property (readonly, nonatomic) CKRoughlyEquivalentProperties *equivalencyProperties;

+ (void)initialize;
+ (id)copySortDescriptor:(id)a0;

- (id)debugDescription;
- (id)CKPropertiesDescription;
- (id)_sortDescriptorsWithoutCopy;
- (id)description;
- (id)init;
- (void)_setPredicate:(id)a0;
- (id)_predicateWithoutCopy;
- (id)initWithRecordType:(id)a0 predicate:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setRecordType:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
