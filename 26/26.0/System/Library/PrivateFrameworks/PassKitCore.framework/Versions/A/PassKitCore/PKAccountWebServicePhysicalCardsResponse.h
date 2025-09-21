@class NSSet;

@interface PKAccountWebServicePhysicalCardsResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) NSSet *physicalCards;
@property (readonly, nonatomic) NSSet *expirationMessaging;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
