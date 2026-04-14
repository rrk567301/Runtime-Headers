@class SHMatch, NSError, SHSignature;

@interface SHSessionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) SHMatch *match;
@property (readonly) NSError *error;
@property (readonly) SHSignature *signature;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSignature:(id)a0 match:(id)a1 error:(id)a2;

@end
