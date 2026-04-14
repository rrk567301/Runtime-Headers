@interface UnilogCoordination.SessionInfoXPC : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ sessiondId;
    void /* unknown type, empty encoding */ startedOn;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ last;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
