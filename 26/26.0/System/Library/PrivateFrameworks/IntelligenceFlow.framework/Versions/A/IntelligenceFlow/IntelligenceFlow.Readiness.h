@interface IntelligenceFlow.Readiness : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ toolKitTools;
    void /* unknown type, empty encoding */ assistantSchemas;
    void /* unknown type, empty encoding */ totalEmbeddings;
    void /* unknown type, empty encoding */ isToolboxIndexingFinished;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
