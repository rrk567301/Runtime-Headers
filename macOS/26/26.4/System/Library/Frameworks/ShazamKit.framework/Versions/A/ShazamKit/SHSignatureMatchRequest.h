@class NSArray, SHSignature, NSDate;

@interface SHSignatureMatchRequest : SHMatcherRequest

@property (readonly) NSDate *deadline;
@property (readonly) BOOL hasHitDeadline;
@property (readonly, copy) NSArray *signatures;
@property (readonly, copy) SHSignature *signature;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSignature:(id)a0 installationID:(id)a1;
- (id)initWithSignature:(id)a0 installationID:(id)a1 deadline:(id)a2 requestID:(id)a3;
- (id)initWithSignatures:(id)a0 installationID:(id)a1;
- (id)initWithSignatures:(id)a0 installationID:(id)a1 deadline:(id)a2 requestID:(id)a3;
- (void)startRequestWithMatcher:(id)a0;

@end
