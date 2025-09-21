@class NSNumber;

@interface ASDAccountLookupResponse : ASDRequestResponse

@property (readonly, nonatomic) NSNumber *accountID;
@property (readonly, nonatomic) BOOL askToBuyEnabled;

- (id)initWithError:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccountID:(id)a0 askToBuyEnabled:(BOOL)a1;

@end
