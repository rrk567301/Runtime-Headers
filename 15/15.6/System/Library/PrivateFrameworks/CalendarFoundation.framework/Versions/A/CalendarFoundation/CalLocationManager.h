@interface CalLocationManager : NSObject

+ (void)_loadMapKit;
+ (void)currentLocationWithCompletionBlock:(id /* block */)a0;
+ (char)isCurrentProcessEntitledToUseLocationServices;
+ (id)placemarkForAddress:(id)a0 withCompletionBlock:(id /* block */)a1;
+ (id)placemarkForLocation:(id)a0 withCompletionBlock:(id /* block */)a1;
+ (id)strictGeocodeString:(id)a0 withCompletionBlock:(id /* block */)a1;

@end
