@interface ObserverUpdate : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _identities;
    void /* unknown type, empty encoding */ _disabledCount;
    void /* unknown type, empty encoding */ _unelectedCount;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
