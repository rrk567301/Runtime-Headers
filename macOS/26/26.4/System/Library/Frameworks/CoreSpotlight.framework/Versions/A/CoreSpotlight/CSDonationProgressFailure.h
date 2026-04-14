@class NSError, NSString;

@interface CSDonationProgressFailure : NSObject <CSCoderEncoder, DonationProgressReporting>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long failureReason;
@property (readonly) NSError *underlyingError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCSCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFailureReason:(unsigned long long)a0 underlyingError:(id)a1;

@end
