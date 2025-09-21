@interface IMIDSIDQueryController : NSObject

+ (long long)_currentCachedIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2;
+ (id)_currentCachedRemoteDevicesForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2;
+ (id)_currentIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2;
+ (char)currentIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
+ (char)currentRemoteDevicesForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
+ (char)participantsForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
+ (char)refreshIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
+ (char)refreshIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
+ (char)idInfoForDestinations:(id)a0 service:(id)a1 fromID:(id)a2 infoTypes:(unsigned long long)a3 options:(id)a4 listenerID:(id)a5 queue:(id)a6 completionBlock:(id /* block */)a7;

@end
