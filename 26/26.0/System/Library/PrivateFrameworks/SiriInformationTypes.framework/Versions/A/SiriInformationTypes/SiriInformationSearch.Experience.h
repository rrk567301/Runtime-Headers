@interface SiriInformationSearch.Experience : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ pluginIdentifier;
    void /* unknown type, empty encoding */ queryConfidence;
    void /* unknown type, empty encoding */ renderOptions;
    void /* unknown type, empty encoding */ associatedEntities;
    void /* unknown type, empty encoding */ userDialogAct;
    void /* unknown type, empty encoding */ intent;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
