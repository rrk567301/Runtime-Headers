@interface FALocationSharingModificationClient : NSObject

- (id)init;
- (void)isLocationSharingModificationAllowedForUserID:(id)a0 completionHandler:(id /* block */)a1;
- (void)setLocationSharingModificationAllowed:(char)a0 forUserID:(id)a1 completionHandler:(id /* block */)a2;

@end
