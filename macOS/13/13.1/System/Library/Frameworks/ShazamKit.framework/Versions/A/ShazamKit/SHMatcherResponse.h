@class SHMatch, NSError, SHSignature;

@interface SHMatcherResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double recordingIntermission;
@property (readonly) double retrySeconds;
@property (readonly) SHMatch *match;
@property (readonly) NSError *error;
@property (readonly) long long result;
@property (readonly) SHSignature *signature;
@property (readonly) BOOL isStillRunningAssociatedRequest;

+ (id)errorResponseForSignature:(id)a0 error:(id)a1;
+ (id)noMatchWithRecordingIntermission:(double)a0 retrySeconds:(double)a1 signature:(id)a2;
+ (id)matchWithRecordingIntermission:(double)a0 retrySeconds:(double)a1 match:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)validate;
- (id)initWithRecordingIntermission:(double)a0 retrySeconds:(double)a1 match:(id)a2 signature:(id)a3 stillRunningAssociatedRequest:(BOOL)a4 error:(id)a5;

@end
