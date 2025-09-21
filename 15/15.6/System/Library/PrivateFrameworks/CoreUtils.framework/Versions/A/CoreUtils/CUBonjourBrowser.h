@class NSArray, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CUBonjourBrowser : NSObject {
    char _activateCalled;
    char _activated;
    struct BonjourBrowser { } *_bonjourBrowser;
    char _invalidateCalled;
    char _invalidateDone;
    NSMutableDictionary *_deviceMap;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    char _browseFlagsChanged;
}

@property (nonatomic) unsigned long long browseFlags;
@property (nonatomic) unsigned int changeFlags;
@property (nonatomic) unsigned int controlFlags;
@property (readonly, copy) NSArray *devices;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *interfaceName;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) id /* block */ deviceFoundHandler;
@property (copy, nonatomic) id /* block */ deviceLostHandler;
@property (copy, nonatomic) id /* block */ deviceChangedHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_update;
- (void)update;
- (void)_invalidated;
- (void)_lostAllDevices;
- (void)_activateSafeInvokeBlock:(id /* block */)a0;
- (void)_bonjourHandleAddOrUpdateDevice:(id)a0;
- (void)_bonjourHandleEventType:(unsigned int)a0 info:(id)a1;
- (void)_bonjourHandleRemoveDevice:(id)a0;
- (int)_bonjourStart;
- (void)_interrupted;
- (void)_updateLocked;
- (id)descriptionWithLevel:(int)a0;

@end
