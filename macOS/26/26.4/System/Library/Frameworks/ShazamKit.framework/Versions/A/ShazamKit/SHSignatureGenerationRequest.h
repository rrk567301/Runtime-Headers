@class NSDate;

@interface SHSignatureGenerationRequest : SHMatcherRequest

@property (readonly) NSDate *deadline;
@property (readonly) BOOL hasHitDeadline;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initOneTimeRequest;
- (id)initOneTimeRequestWithRequestID:(id)a0;
- (id)initWithDeadline:(id)a0;
- (id)initWithDeadline:(id)a0 requestID:(id)a1;
- (void)startRequestWithMatcher:(id)a0;

@end
