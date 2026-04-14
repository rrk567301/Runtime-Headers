@class NSString;

@interface FamilyCircle.FADeleteFamilyResult : NSObject {
    void /* function */ errorTitle;
    void /* function */ errorMessage;
    void /* function */ statusMessage;
    void /* function */ learnMoreURL;
}

@property (nonatomic) BOOL success;
@property (nonatomic, copy) NSString *errorTitle;
@property (nonatomic, copy) NSString *errorMessage;
@property (nonatomic, copy) NSString *statusMessage;
@property (nonatomic, copy) NSString *learnMoreURL;
@property (nonatomic) long long statusCode;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSuccess:(BOOL)a0 errorTitle:(id)a1 errorMessage:(id)a2 learnMoreURL:(id)a3 statusMessage:(id)a4 statusCode:(long long)a5;

@end
