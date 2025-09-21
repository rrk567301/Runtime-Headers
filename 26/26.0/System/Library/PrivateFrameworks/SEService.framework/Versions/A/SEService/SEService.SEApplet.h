@class NSString;

@interface SEService.SEApplet : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ moduleIdentifier;
    void /* unknown type, empty encoding */ lifecycleState;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
