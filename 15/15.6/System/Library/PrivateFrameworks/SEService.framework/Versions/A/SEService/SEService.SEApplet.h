@class NSString;

@interface SEService.SEApplet : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ moduleIdentifier;
    void /* unknown type, empty encoding */ lifecycleState;
}

@property (class, nonatomic) char supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
