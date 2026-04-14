@class NSString, HMDBiomeEventManager;
@protocol HMDBiomeLogEventObserverDataSource;

@interface HMDBiomeLogEventObserver : HMFObject <HMMLogEventObserver> {
    HMDBiomeEventManager *_biomeEventManager;
    id<HMDBiomeLogEventObserverDataSource> _dataSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (id)initWithBiomeEventManager:(id)a0 dataSource:(id)a1;
- (void)observeEvent:(id)a0;
- (void).cxx_destruct;

@end
