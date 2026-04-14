@interface Sage.SummarizationXPCRequest : Sage.XPCValue {
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ requestInfo;
    void /* unknown type, empty encoding */ onBehalfOfProcess;
    void /* unknown type, empty encoding */ originatingProcess;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
