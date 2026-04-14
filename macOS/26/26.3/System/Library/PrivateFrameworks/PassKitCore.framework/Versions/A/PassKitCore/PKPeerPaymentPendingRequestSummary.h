@class NSString, NSArray, NSDate;

@interface PKPeerPaymentPendingRequestSummary : NSObject

@property (readonly, copy, nonatomic) NSString *requestToken;
@property (readonly, copy, nonatomic) NSString *status;
@property (readonly, copy, nonatomic) NSArray *actions;
@property (readonly, copy, nonatomic) NSDate *expiryDate;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
