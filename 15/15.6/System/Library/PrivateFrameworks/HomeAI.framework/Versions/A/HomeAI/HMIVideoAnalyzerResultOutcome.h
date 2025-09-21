@class NSString;

@interface HMIVideoAnalyzerResultOutcome : HMFObject <NSSecureCoding>

@property (class, readonly) HMIVideoAnalyzerResultOutcome *success;
@property (class, readonly) HMIVideoAnalyzerResultOutcome *skipped;
@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long code;
@property (readonly) char isSkipped;
@property (readonly) char isSuccess;
@property (readonly) NSString *message;
@property (readonly) double analysisFPS;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCode:(unsigned long long)a0 analysisFPS:(double)a1 message:(id)a2;

@end
