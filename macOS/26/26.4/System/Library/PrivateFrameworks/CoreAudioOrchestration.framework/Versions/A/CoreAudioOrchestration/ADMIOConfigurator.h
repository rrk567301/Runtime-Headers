@class NSString;

@interface ADMIOConfigurator : NSObject <ADMConfigurationProtocol> {
    struct shared_ptr<ADMIO> { struct ADMIO *__ptr_; struct __shared_weak_count *__cntrl_; } mADMIO;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
