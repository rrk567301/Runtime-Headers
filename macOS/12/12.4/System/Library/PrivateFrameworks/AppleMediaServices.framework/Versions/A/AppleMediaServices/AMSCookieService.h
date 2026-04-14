@class NSString;

@interface AMSCookieService : NSObject <AMSCookieServiceInterface>

@property (class, readonly) AMSCookieService *sharedService;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
