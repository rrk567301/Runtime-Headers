@class SHSignature, SHMatch, NSUUID, NSError;

@interface SHMatcherResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double recordingIntermission;
@property (readonly) double retrySeconds;
@property (readonly) SHMatch *match;
@property (readonly) NSError *error;
@property (readonly) long long result;
@property (readonly) SHSignature *signature;
@property (readonly) BOOL isStillRunningAssociatedRequest;
@property (readonly) NSUUID *runningAssociatedRequestID;

+ (id)errorResponseForSignature:(id)a0 error:(id)a1;
+ (id)matchWithRecordingIntermission:(double)a0 retrySeconds:(double)a1 match:(id)a2;
+ (id)noMatchWithRecordingIntermission:(double)a0 retrySeconds:(double)a1 signature:(id)a2;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)validate;
- (id)initWithRecordingIntermission:(double)a0 retrySeconds:(double)a1 match:(id)a2 signature:(id)a3 associatedRequestID:(id)a4 result:(long long)a5 error:(id)a6;
- (id)initWithRecordingIntermission:(double)a0 retrySeconds:(double)a1 match:(id)a2 signature:(id)a3 runningAssociatedRequestID:(id)a4 error:(id)a5;

@end
