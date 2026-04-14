@interface ContentKit.WFAskLLMUserPrompt : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ textComponents;
    void /* unknown type, empty encoding */ documents;
    void /* unknown type, empty encoding */ images;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
