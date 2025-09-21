@class NSObject;
@protocol OS_dispatch_queue;

@interface INCExtensionManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)initialize;
+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)fetchExtensionForIntent:(id)a0 extensionInputItems:(id)a1 requiresTCC:(char)a2 completion:(id /* block */)a3;
- (void)fetchExtensionForIntent:(id)a0 extensionInputItems:(id)a1 requiresTCC:(char)a2 requiresTrustCheck:(char)a3 completion:(id /* block */)a4;

@end
