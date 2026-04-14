@interface _EXDomainAttribute : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ domain;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ sourceEnvironment;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
