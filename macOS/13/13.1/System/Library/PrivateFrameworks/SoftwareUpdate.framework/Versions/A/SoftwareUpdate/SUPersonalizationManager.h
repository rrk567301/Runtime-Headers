@class NSObject;
@protocol OS_dispatch_queue;

@interface SUPersonalizationManager : NSObject

@property (retain) NSObject<OS_dispatch_queue> *personalizationQueue;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (BOOL)personalizationRequiredForRunningSystem;
- (BOOL)personalizationRequiredForProducts:(id)a0;
- (BOOL)personalizeProducts:(id)a0 inForeground:(BOOL)a1 error:(id *)a2;
- (BOOL)_personalizeProducts:(id)a0 inForeground:(BOOL)a1 error:(id *)a2;
- (id)_chooseProductToPersonalize:(id)a0;
- (id)_localPackageSpecifiersForLocalProduct:(id)a0;

@end
