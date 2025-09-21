@class TVRMSService, NSNetService;

@interface _RMSBonjourService : NSObject

@property (retain, nonatomic) TVRMSService *service;
@property (retain, nonatomic) NSNetService *netService;
@property (nonatomic) long long state;
@property (nonatomic, getter=isAvailable) char available;

- (void).cxx_destruct;

@end
