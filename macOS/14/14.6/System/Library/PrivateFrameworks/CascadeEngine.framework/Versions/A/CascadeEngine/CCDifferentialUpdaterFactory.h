@class CCDataSiteManager, CCDevice;
@protocol CCSetChangeNotifierProtocol;

@interface CCDifferentialUpdaterFactory : NSObject {
    CCDataSiteManager *_dataSiteManager;
    id<CCSetChangeNotifierProtocol> _changeNotifier;
    double _timeout;
    CCDevice *_localDevice;
}

- (void).cxx_destruct;
- (id)_localDevice;
- (id)initWithDataSiteManager:(id)a0 changeNotifier:(id)a1 timeout:(double)a2;
- (id)updaterForSet:(id)a0 withRequest:(id)a1;

@end
