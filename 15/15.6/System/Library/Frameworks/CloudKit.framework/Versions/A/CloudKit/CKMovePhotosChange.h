@class NSString, CKRecordID, CKRoughlyEquivalentProperties, CKRecord;

@interface CKMovePhotosChange : NSObject <CKRoughlyEquivalent, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) CKRecordID *sourceRecordID;
@property (retain, nonatomic) NSString *sourceRecordChangeTag;
@property (retain, nonatomic) CKRecord *destinationRecord;
@property (readonly, nonatomic) CKRoughlyEquivalentProperties *equivalencyProperties;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)CKDescriptionPropertiesWithPublic:(char)a0 private:(char)a1 shouldExpand:(char)a2;

@end
