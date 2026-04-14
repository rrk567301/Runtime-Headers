@class NSString, NSDictionary;

@interface _NSCoreDataCodableError : NSError {
    void /* function */ exceptionReason;
}

@property (nonatomic, readonly) NSString *exceptionName;
@property (nonatomic, readonly) long long exceptionCode;
@property (nonatomic, readonly) NSString *exceptionReason;
@property (nonatomic, readonly) NSDictionary *exceptionUserInfo;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;
- (id)exception;

@end
