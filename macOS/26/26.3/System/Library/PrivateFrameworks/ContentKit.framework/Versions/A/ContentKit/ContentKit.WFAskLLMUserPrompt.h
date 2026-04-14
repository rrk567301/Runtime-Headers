@interface ContentKit.WFAskLLMUserPrompt : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ textComponents;
    void /* unknown type, empty encoding */ documents;
    void /* unknown type, empty encoding */ images;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
