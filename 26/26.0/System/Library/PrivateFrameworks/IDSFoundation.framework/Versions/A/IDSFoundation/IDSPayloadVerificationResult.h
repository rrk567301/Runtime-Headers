@class IDSURI, NSError;

@interface IDSPayloadVerificationResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) IDSURI *uri;
@property (readonly, nonatomic) BOOL verified;
@property (readonly, nonatomic) NSError *error;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithURI:(id)a0 verified:(BOOL)a1 error:(id)a2;

@end
