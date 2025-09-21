@class NSError;

@interface ASDRequestResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSError *error;

- (id)initWithError:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)setSuccess:(BOOL)a0;
- (void)setError:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
