@class CalExchangeBasicAccountInfoProvider;

@interface CalExchangeTestConnectionOperation : CalOperation {
    CalExchangeBasicAccountInfoProvider *_accountInfoProvider;
}

+ (id)testConnectionOperationWithSessionID:(id)a0;
+ (id)testConnectionOperationWithAccountInfoProvider:(id)a0;

- (void).cxx_destruct;
- (id)accountInfoProvider;
- (BOOL)executeInContext:(id)a0 error:(id *)a1;
- (id)initWithBasicAccountInfoProvider:(id)a0;
- (BOOL)_testURL:(id)a0 withSession:(id)a1 account:(id)a2 error:(id *)a3;

@end
