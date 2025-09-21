@class NSObject;
@protocol OS_dispatch_queue;

@interface INCExtensionManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedManager;
+ (void)initialize;

- (void)fetchExtensionForIntent:(id)a0 extensionInputItems:(id)a1 requiresTCC:(BOOL)a2 completion:(id /* block */)a3;
- (id)init;
- (void).cxx_destruct;
- (void)fetchExtensionForIntent:(id)a0 extensionInputItems:(id)a1 requiresTCC:(BOOL)a2 requiresTrustCheck:(BOOL)a3 completion:(id /* block */)a4;

@end
