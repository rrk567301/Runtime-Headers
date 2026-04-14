@class NSString;

@interface SiriKitRuntime.CommitResultCandidate : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ resultCandidateId;
    void /* unknown type, empty encoding */ resultSelectedMessage;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
