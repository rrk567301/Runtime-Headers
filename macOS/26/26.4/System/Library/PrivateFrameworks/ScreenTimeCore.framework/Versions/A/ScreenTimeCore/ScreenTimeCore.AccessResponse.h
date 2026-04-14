@interface ScreenTimeCore.AccessResponse : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ answerType;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
