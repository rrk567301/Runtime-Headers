@interface ObserverUpdate : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _identities;
    void /* unknown type, empty encoding */ _disabledCount;
    void /* unknown type, empty encoding */ _unelectedCount;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
