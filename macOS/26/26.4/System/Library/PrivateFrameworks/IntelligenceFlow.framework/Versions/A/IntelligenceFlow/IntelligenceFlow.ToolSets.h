@interface IntelligenceFlow.ToolSets : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ indexedTool;
    void /* unknown type, empty encoding */ builtinPlannerTool;
    void /* unknown type, empty encoding */ appIntentPlannerTool;
    void /* unknown type, empty encoding */ siriXMiniPlannerTool;
    void /* unknown type, empty encoding */ deniedPlannerTool;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
