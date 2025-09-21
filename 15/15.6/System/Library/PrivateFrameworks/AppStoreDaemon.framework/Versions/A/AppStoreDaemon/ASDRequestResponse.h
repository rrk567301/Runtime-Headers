@class NSError;

@interface ASDRequestResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char success;
@property (readonly, nonatomic) NSError *error;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithError:(id)a0;
- (void)setError:(id)a0;
- (void)setSuccess:(char)a0;

@end
