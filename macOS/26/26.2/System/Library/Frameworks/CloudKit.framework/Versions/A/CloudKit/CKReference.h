@class NSString, CKRecordID;

@interface CKReference : NSObject <CKRecordValue, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long referenceAction;
@property (readonly, copy, nonatomic) CKRecordID *recordID;

+ (void)initialize;
+ (int)ckdpReferenceTypeForCKReferenceAction:(unsigned long long)a0;
+ (unsigned long long)ckReferenceActionForCKDPRecordReferenceType:(int)a0;

- (id)ckShortDescription;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithRecordID:(id)a0 action:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setRecordID_modelMutation:(id)a0;
- (id)init;
- (id)CKPropertiesDescription;
- (id)initInternal;
- (id)initWithRecord:(id)a0 action:(unsigned long long)a1;
- (void)setReferenceAction_modelMutation:(unsigned long long)a0;

@end
