@class NSArray, CKMergeableValueID, NSString, CKRoughlyEquivalentProperties;

@interface CKReplaceDeltasRequest : NSObject <CKPropertiesDescription, NSSecureCoding, NSCopying, CKRoughlyEquivalent>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) CKMergeableValueID *valueID;
@property (readonly, copy, nonatomic) NSArray *deltaIdentifiersToReplace;
@property (readonly, copy, nonatomic) NSArray *replacementDeltas;
@property (readonly, nonatomic) char replacementDeltasContainNewData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CKRoughlyEquivalentProperties *equivalencyProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)initWithValueID:(id)a0 deltaIdentifiersToReplace:(id)a1 replacementDeltas:(id)a2 replacementDeltasContainNewData:(char)a3;

@end
