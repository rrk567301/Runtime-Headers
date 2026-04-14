@interface GroupKit.InternalError : NSError {
    void /* unknown type, empty encoding */ internalCode;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;

@end
