@class NSString;

@interface SensitiveContentAnalysis.SampleTimer : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ stats;
    void /* unknown type, empty encoding */ lastAnalysisTime;
    void /* unknown type, empty encoding */ lastFrameNeedsFollowUp;
    void /* unknown type, empty encoding */ lastFrameNeedingFollowUpTime;
    void /* unknown type, empty encoding */ $__lazy_storage_$_analysisInterval;
    void /* unknown type, empty encoding */ lock;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;

@end
