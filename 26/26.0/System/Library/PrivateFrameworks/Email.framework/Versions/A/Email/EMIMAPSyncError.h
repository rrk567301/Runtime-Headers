@class NSDictionary;

@interface EMIMAPSyncError : NSError {
    void /* unknown type, empty encoding */ _underlying;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSDictionary *userInfo;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;

@end
