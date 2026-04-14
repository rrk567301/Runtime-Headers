@class CCDataResourceWriteAccess, NSObject, CCDifferentialSetUpdaterFactory;
@protocol OS_dispatch_queue;

@interface CCDonationServiceFactory : NSObject {
    CCDifferentialSetUpdaterFactory *_updaterFactory;
    CCDataResourceWriteAccess *_writeAccess;
    double _timeoutCheckInterval;
    unsigned long long _timeoutCheckProgress;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)makeConnection:(id)a0;
- (id)initWithWriteAccess:(id)a0;
- (id)initWithWriteAccess:(id)a0 timeoutCheckInterval:(double)a1 timeoutCheckProgress:(unsigned long long)a2;
- (id)makeXPCConnection:(id)a0;

@end
