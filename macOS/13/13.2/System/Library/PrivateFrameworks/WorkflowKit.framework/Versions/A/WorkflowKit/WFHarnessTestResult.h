@class NSString, WFContentCollection;

@interface WFHarnessTestResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL failed;
@property (readonly, nonatomic) WFContentCollection *output;
@property (readonly, copy, nonatomic) NSString *failureReason;
@property (readonly, copy, nonatomic) NSString *failureFilePath;
@property (readonly, nonatomic) long long failureLine;

+ (id)successWithOutput:(id)a0;
+ (id)failureWithReason:(id)a0;
+ (id)failureWithReason:(id)a0 filePath:(id)a1 line:(long long)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)errorRepresentation;
- (id)initWithFailure:(BOOL)a0 output:(id)a1 reason:(id)a2 failureFilePath:(id)a3 failureLine:(long long)a4;

@end
