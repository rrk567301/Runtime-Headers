@class NSUUID, RTPlaceInference, NSDate;

@interface RTPlaceInferenceQuery : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) unsigned long long fidelityPolicyMask;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) RTPlaceInference *placeInference;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 date:(id)a1 fidelityPolicyMask:(unsigned long long)a2 placeInference:(id)a3;

@end
