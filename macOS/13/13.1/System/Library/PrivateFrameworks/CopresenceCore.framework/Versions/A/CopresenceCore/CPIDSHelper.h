@class NSString, IDSService;

@interface CPIDSHelper : NSObject {
    IDSService *_service;
}

@property (readonly, copy, nonatomic) NSString *selfAccountName;

+ (BOOL)isMuseCapable;
+ (id)convertToIDSDestintation:(id)a0;
+ (id)rawAddressForDestination:(id)a0;

- (void).cxx_destruct;
- (BOOL)isLoggedIn;
- (id)initWithSevice:(id)a0;
- (id)anySelfAccount;
- (BOOL)isSelfAlias:(id)a0;

@end
