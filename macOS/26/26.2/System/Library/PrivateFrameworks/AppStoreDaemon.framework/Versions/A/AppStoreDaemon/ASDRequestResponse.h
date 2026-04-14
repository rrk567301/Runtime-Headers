@class NSError;

@interface ASDRequestResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSError *error;

- (id)initWithCoder:(id)a0;
- (void)setSuccess:(BOOL)a0;
- (void)setError:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
