@class NSString, CCDataSiteManager;

@interface CCSetsAccessDaemonDelegate : NSObject <BMAccessDelegate> {
    CCDataSiteManager *_dataManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)prepareResource:(id)a0 withMode:(unsigned long long)a1;
- (id)initWithDataSiteManager:(id)a0;

@end
