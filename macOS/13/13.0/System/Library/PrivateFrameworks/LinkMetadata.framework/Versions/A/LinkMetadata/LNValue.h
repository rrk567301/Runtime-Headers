@class LNDisplayRepresentation, LNValueType;

@interface LNValue : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) LNDisplayRepresentation *displayRepresentation;
@property (readonly, copy, nonatomic) LNValueType *valueType;
@property (readonly, copy, nonatomic) id value;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0 valueType:(id)a1 displayRepresentation:(id)a2;
- (id)initWithValues:(id)a0 memberValueType:(id)a1;
- (id)initWithValue:(id)a0 valueType:(id)a1;

@end
