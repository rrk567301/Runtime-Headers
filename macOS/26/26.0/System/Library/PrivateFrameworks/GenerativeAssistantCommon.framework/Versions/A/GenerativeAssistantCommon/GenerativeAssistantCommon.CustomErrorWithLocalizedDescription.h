@class NSString;

@interface GenerativeAssistantCommon.CustomErrorWithLocalizedDescription : NSError {
    void /* unknown type, empty encoding */ errorDomain;
    void /* unknown type, empty encoding */ errorCode;
    void /* unknown type, empty encoding */ errorDescription;
}

@property (nonatomic, readonly) NSString *localizedDescription;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;

@end
