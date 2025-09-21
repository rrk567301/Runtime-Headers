@class NSString, OSALogIdentity, NSError;

@interface OSALogWriteResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) OSALogIdentity *identity;
@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentity:(id)a0 error:(id)a1;
- (id)initWithIdentity:(id)a0 filePath:(id)a1;

@end
