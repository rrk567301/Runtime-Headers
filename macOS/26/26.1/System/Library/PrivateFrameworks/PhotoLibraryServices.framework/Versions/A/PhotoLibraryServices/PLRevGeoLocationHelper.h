@interface PLRevGeoLocationHelper : NSObject

+ (void)simulateAutoNaviForBlock:(id /* block */)a0;
+ (id)currentRevGeoProvider;
+ (id)autoNaviCountryCode;
+ (BOOL)isAutoNaviCountryCode:(id)a0;
+ (id)appleProviderID;
+ (BOOL)isAutoNaviRevGeoProvider:(id)a0;
+ (id)autoNaviProviderID;
+ (BOOL)isCurrentRevGeoProviderAutoNavi;

@end
