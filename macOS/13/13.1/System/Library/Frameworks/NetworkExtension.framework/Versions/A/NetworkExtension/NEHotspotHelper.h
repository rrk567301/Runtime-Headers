@interface NEHotspotHelper : NSObject

+ (BOOL)registerWithOptions:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
+ (BOOL)logoff:(id)a0;
+ (id)supportedNetworkInterfaces;

@end
