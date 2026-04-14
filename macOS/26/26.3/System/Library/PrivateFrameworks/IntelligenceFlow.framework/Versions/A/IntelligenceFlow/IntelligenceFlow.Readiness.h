@interface IntelligenceFlow.Readiness : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ toolKitTools;
    void /* unknown type, empty encoding */ assistantSchemas;
    void /* unknown type, empty encoding */ totalEmbeddings;
    void /* unknown type, empty encoding */ isToolboxIndexingFinished;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
