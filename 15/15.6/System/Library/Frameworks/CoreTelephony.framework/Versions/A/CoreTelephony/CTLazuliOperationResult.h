@class NSError, CTLazuliOperationID, CTLazuliOperationError;

@interface CTLazuliOperationResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char didSucceed;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) CTLazuliOperationID *operation;
@property (copy, nonatomic) CTLazuliOperationError *errorParameter;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (char)isEqualToCTLazuliOperationResult:(id)a0;

@end
