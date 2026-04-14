@class IDSURI, NSError;

@interface IDSPayloadVerificationResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) IDSURI *uri;
@property (readonly, nonatomic) BOOL verified;
@property (readonly, nonatomic) NSError *error;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithURI:(id)a0 verified:(BOOL)a1 error:(id)a2;

@end
