@class CKMergeableValueID, NSArray, NSString;

@interface CKReplaceDeltasRequest : NSObject <CKPropertiesDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CKMergeableValueID *valueID;
@property (copy, nonatomic) NSArray *deltaIdentifiersToReplace;
@property (copy, nonatomic) NSArray *replacementDeltas;
@property (nonatomic) BOOL replacementDeltasContainNewData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)initWithValueID:(id)a0 deltaIdentifiersToReplace:(id)a1 replacementDeltas:(id)a2 replacementDeltasContainNewData:(BOOL)a3;

@end
