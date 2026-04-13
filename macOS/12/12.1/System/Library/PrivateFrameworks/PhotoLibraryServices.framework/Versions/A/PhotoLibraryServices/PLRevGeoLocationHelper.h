@interface PLRevGeoLocationHelper : NSObject

+ (BOOL)isCurrentRevGeoProviderAutoNavi;
+ (BOOL)isAutoNaviRevGeoProvider:(id)a0;
+ (BOOL)isAutoNaviCountryCode:(id)a0;
+ (id)currentRevGeoProvider;
+ (id)autoNaviCountryCode;
+ (id)autoNaviProviderID;
+ (id)appleProviderID;
+ (void)simulateAutoNaviForBlock:(id /* block */)a0;

@end
