@class NSString, CKRecordID;

@interface CKSyncEnginePendingRecordZoneChange : NSObject <CKPropertiesDescription, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) CKRecordID *recordID;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recordChangesWithOppositeTypeFromRecordChanges:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (void)CKDescribePropertiesUsing:(id)a0;
- (char)CKDescriptionShouldPrintPointer;
- (id)CKDescriptionClassName;
- (id)initWithRecordID:(id)a0 type:(long long)a1;
- (id)oppositeTypeChange;

@end
