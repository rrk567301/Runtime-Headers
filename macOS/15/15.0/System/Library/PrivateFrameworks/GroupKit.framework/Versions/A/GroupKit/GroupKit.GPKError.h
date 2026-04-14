@interface GroupKit.GPKError : NSError {
    void /* unknown type, empty encoding */ internalErrorCode;
    void /* unknown type, empty encoding */ publicErrorCode;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;

@end
