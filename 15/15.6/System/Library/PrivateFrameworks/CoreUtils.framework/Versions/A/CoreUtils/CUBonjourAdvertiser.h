@class NSString, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CUBonjourAdvertiser : NSObject {
    char _activated;
    struct BonjourAdvertiserPrivate { } *_bonjourAdvertiser;
    char _invalidateCalled;
    char _started;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    char _updatePending;
    char _advertiseFlagsChanged;
    char _domainChanged;
    char _interfaceIndexChanged;
    char _interfaceNameChanged;
    char _nameChanged;
    char _portChanged;
    char _serviceTypeChanged;
    char _txtDictionaryChanged;
}

@property (nonatomic) unsigned long long advertiseFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic) unsigned int interfaceIndex;
@property (copy, nonatomic) NSString *interfaceName;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int port;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSDictionary *txtDictionary;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_activateLocked;
- (void)_activateSafeInvokeBlock:(id /* block */)a0;
- (void)_updateLocked;
- (void)_updateTXTDictionary;
- (id)descriptionWithLevel:(int)a0;

@end
