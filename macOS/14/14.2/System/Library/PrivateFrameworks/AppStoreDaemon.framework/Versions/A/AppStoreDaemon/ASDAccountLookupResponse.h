@class NSNumber, NSError;

@interface ASDAccountLookupResponse : ASDRequestResponse

@property (copy) NSNumber *accountID;
@property BOOL askToBuyEnabled;
@property (copy) NSError *error;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAccountID:(id)a0;

@end
