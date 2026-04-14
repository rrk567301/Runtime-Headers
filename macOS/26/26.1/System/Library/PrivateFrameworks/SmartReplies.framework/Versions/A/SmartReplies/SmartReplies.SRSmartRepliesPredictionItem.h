@interface SmartReplies.SRSmartRepliesPredictionItem : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ score;
    void /* unknown type, empty encoding */ label;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
