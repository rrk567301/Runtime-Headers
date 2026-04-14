@interface IntelligenceFlow.Readiness : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ toolKitTools;
    void /* unknown type, empty encoding */ assistantSchemas;
    void /* unknown type, empty encoding */ totalEmbeddings;
    void /* unknown type, empty encoding */ isToolboxIndexingFinished;
    void /* unknown type, empty encoding */ indexingStatus;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
