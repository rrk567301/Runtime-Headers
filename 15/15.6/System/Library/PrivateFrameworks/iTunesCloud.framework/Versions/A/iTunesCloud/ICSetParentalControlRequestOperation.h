@class ICStoreRequestContext, ICStoreURLRequest;

@interface ICSetParentalControlRequestOperation : ICRequestOperation

@property (nonatomic) char allowsExplicitContent;
@property (nonatomic, getter=isAutomatic) char automatic;
@property (retain, nonatomic) ICStoreRequestContext *requestContext;
@property (retain, nonatomic) ICStoreURLRequest *storeURLRequest;

- (void).cxx_destruct;
- (void)cancel;
- (void)execute;
- (void)_buildAndSendRequestForURL:(id)a0;
- (void)_getURLFromBagAndSendRequest;
- (id)initWithRequestContext:(id)a0 allowsExplicitContent:(char)a1 isAutomatic:(char)a2;

@end
