@class SHKSharingService;
@protocol NSSharingServiceDelegate;

@interface NSSharingServiceReserved : NSObject {
    id<NSSharingServiceDelegate> delegate;
    SHKSharingService *service;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
