@class NSError;

@interface VSFailable : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long kind;
@property (retain, nonatomic) id object;
@property (copy, nonatomic) NSError *error;

+ (id)failableWithObject:(id)a0;
+ (id)decodableClasses;
+ (id)failableWithError:(id)a0;

- (void)unwrapObject:(id /* block */)a0 error:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithError:(id)a0;
- (id)initWithObject:(id)a0;
- (id)unwrappedWithError:(id *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
