@class WPDaemonServer, NSString, NSSet, NSIndexSet;

@interface WPDManager : NSObject <CBCentralManagerDelegate, CBPeripheralManagerDelegate, CBScalablePipeManagerDelegate>

@property (nonatomic) long long state;
@property (weak) WPDaemonServer *server;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) char isHomePod;
@property (nonatomic) char restricted;
@property (nonatomic) char testMode;
@property (retain, nonatomic) NSSet *cbManagers;
@property (readonly, nonatomic) char isInternalBuild;
@property (readonly, nonatomic) NSIndexSet *scanAllowlist;
@property (readonly, nonatomic) NSIndexSet *advAllowlist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (char)isInternalBuild;
+ (id)advAllowlist;
+ (id)cbStateAsString:(long long)a0;
+ (void)initializeAdvDenylist:(id)a0 AdvAllowlist:(id)a1 ScanDenylist:(id)a2 ScanAllowlist:(id)a3;
+ (id)scanAllowlist;
+ (id)wpStateAsString:(long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cleanup;
- (void)update;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)peripheralManagerDidUpdateState:(id)a0;
- (void)scalablePipeManagerDidUpdateState:(id)a0;
- (void)cbManagerDidUpdateState:(id)a0;
- (void)generateStateDump;
- (id)generateStateDumpStrings;
- (id)initWithServer:(id)a0 Name:(id)a1;
- (char)isAdvertisingAllowlistedForType:(unsigned char)a0;
- (char)isScanAllowlistedForType:(unsigned char)a0;
- (void)updateState:(long long)a0 Restricted:(char)a1;

@end
