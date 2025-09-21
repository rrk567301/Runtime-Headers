@interface PLRevGeoLocationHelper : NSObject

+ (void)simulateAutoNaviForBlock:(id /* block */)a0;
+ (BOOL)isAutoNaviRevGeoProvider:(id)a0;
+ (BOOL)isAutoNaviCountryCode:(id)a0;
+ (id)currentRevGeoProvider;
+ (id)autoNaviCountryCode;
+ (id)autoNaviProviderID;
+ (id)appleProviderID;
+ (BOOL)isCurrentRevGeoProviderAutoNavi;

@end
