@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface DNDAppInfoService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_clientIdentifier;
}

+ (id)serviceForClientIdentifier:(id)a0;
+ (void)initialize;

- (id)_initWithClientIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)getAppInfoForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)getAppInfoForBundleIdentifiers:(id)a0 error:(id *)a1;

@end
