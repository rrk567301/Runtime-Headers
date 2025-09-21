@class NSError, NSString;

@interface AIDAServiceOperationResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char success;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSString *type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSuccess:(char)a0 error:(id)a1 type:(id)a2;

@end
