@class NSError, NSString;

@interface AIDAServiceOperationResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSString *type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSuccess:(BOOL)a0 error:(id)a1 type:(id)a2;

@end
