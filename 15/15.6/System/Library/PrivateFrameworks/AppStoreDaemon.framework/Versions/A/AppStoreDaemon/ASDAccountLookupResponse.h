@class NSNumber;

@interface ASDAccountLookupResponse : ASDRequestResponse

@property (readonly, nonatomic) NSNumber *accountID;
@property (readonly, nonatomic) char askToBuyEnabled;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithError:(id)a0;
- (id)initWithAccountID:(id)a0 askToBuyEnabled:(char)a1;

@end
