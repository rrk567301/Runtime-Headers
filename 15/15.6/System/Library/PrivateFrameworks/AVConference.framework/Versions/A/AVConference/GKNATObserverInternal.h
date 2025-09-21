@class NSRecursiveLock, NSMutableDictionary, GKNATObserver_SCContext, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group, OS_dispatch_semaphore;

@interface GKNATObserverInternal : GKNATObserver {
    id _delegate;
    struct __SCDynamicStore { } *_dynamicStore;
    NSRecursiveLock *_xNATCheck;
    int _lastReportedNATType;
    int _lastReportedCarrierNATType;
    int _lastReportedNonCarrierNATType;
    NSMutableDictionary *_interfaceInfoDictionary;
    char _nonCarrierInterfacesOnly;
    char _checkTCPAndSSL;
    char _favorNonCarrier;
    char _newCarrierType;
    char _addInRangeFlag;
    char _addCarrierFlag;
    char _ignoreNatTypeCache;
    char _ignoreCarrierBundle;
    int _NATCheckRetryCount;
    double _NATCheckRetryDelay;
    NSMutableDictionary *_currentNetworkNames;
    NSObject<OS_dispatch_queue> *_natCheckQueue;
    NSObject<OS_dispatch_queue> *_reportNATQueue;
    NSObject<OS_dispatch_group> *_natCheckGroup;
    NSObject<OS_dispatch_semaphore> *_natCheckNetNameSema;
    char _fNATCheckQueued;
    char _fNATCheckInProgress;
    GKNATObserver_SCContext *_sccontext;
    char _hasNATCheckStarted;
    char _hasNATCheckEnded;
}

- (oneway void)release;
- (void)dealloc;
- (id)init;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)initWithOptions:(id)a0;
- (int)currentNATType;
- (void)HTTPCheckWithIPPort:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0 ipv6Prefix:(const struct { int x0; unsigned char x1[12]; } *)a1 useCache:(char)a2;
- (void)HTTPSCheckWithIPPort:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0 ipv6Prefix:(const struct { int x0; unsigned char x1[12]; } *)a1 useCache:(char)a2;
- (void)NATCheckWithIPPort:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0 ipv6Prefix:(const struct { int x0; unsigned char x1[12]; } *)a1 useCache:(char)a2;
- (id)copyNatTypeCache_OSXGamedScheme;
- (id)lookupCachedNATFlagsForNetwork:(id)a0;
- (void)cacheNATFlags:(id)a0 forNetwork:(id)a1;
- (void)calculateSummmaryNATType:(int *)a0 andCarrierNATType:(int *)a1 andNonCarrierNATType:(int *)a2 copyInterfaceInfoDictionary:(id *)a3;
- (struct tagCommNATInfo { unsigned int x0; unsigned int x1; unsigned short x2[3]; unsigned int x3; } *)callCommNATTestFromIPPort:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0 ipv6Prefix:(const struct { int x0; unsigned char x1[12]; } *)a1;
- (int)callHTTPTestFromIPPort:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0 ipv6Prefix:(const struct { int x0; unsigned char x1[12]; } *)a1 ToServer:(id)a2 isSSL:(char)a3;
- (void)clearRetries;
- (id)copyNatTypeCache;
- (id)copyNatTypeCachePlistScheme;
- (char)ensureNatCachePathExists;
- (id)nameForNetworkWithIPPort:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0 interfaceName:(id)a1;
- (int)natTypeForCommNATFlags:(unsigned int)a0 isCarrier:(char)a1;
- (void)registerForNetworkChanges;
- (void)reportNATType;
- (unsigned int)setCommNATFlags:(unsigned int)a0 forInterface:(id)a1 isCached:(char)a2;
- (unsigned int)setFlags:(unsigned int)a0 forInterface:(id)a1 isCached:(char)a2 isCachedKey:(id)a3 mask:(unsigned int)a4;
- (unsigned int)setSSLFlags:(unsigned int)a0 forInterface:(id)a1 isCached:(char)a2;
- (unsigned int)setTCPFlags:(unsigned int)a0 forInterface:(id)a1 isCached:(char)a2;
- (void)shouldTryNATCheck;
- (char)theObserverRunsInFaceTime;
- (void)tryNATCheckWithDelay:(double)a0;
- (void)updateNatTypeCache:(id)a0;
- (void)updateNatTypeCache_CachePlistScheme:(id)a0;
- (void)updateNatTypeCache_OSXGamedScheme:(id)a0;

@end
