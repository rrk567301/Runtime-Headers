@class LACSPassword;

@interface LACSExtractablePassword : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LACSPassword *password;

- (id)initWithPassword:(id)a0;
- (id)data;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)data:(id *)a0;
- (id)contextRef;
- (id)secureCopy;

@end
