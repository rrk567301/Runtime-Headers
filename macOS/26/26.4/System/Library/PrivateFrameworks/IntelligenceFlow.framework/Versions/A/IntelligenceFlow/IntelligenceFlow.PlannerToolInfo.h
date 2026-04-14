@interface IntelligenceFlow.PlannerToolInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ toolDef;
    void /* unknown type, empty encoding */ toolUsageDesc;
    void /* unknown type, empty encoding */ toolEmbeddingDesc;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
