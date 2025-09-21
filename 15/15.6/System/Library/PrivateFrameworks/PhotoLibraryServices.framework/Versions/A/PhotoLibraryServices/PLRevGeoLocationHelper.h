@interface PLRevGeoLocationHelper : NSObject

+ (id)appleProviderID;
+ (char)isCurrentRevGeoProviderAutoNavi;
+ (id)autoNaviCountryCode;
+ (id)autoNaviProviderID;
+ (id)currentRevGeoProvider;
+ (char)isAutoNaviCountryCode:(id)a0;
+ (char)isAutoNaviRevGeoProvider:(id)a0;
+ (void)simulateAutoNaviForBlock:(id /* block */)a0;

@end
