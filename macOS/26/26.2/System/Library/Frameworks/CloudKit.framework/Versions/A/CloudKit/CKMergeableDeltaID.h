@class NSString, CKMergeableValueID;

@interface CKMergeableDeltaID : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *deltaIdentifier;
@property (readonly, copy, nonatomic) CKMergeableValueID *valueID;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDeltaIdentifier:(id)a0 valueID:(id)a1;

@end
