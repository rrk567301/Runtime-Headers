@class NSString, TSgPTPManager;

@interface TSXgPTPManager : TSXClient <TSXgPTPManagerClientProtocol> {
    TSgPTPManager *_gPTPManager;
}

@property (readonly, nonatomic) unsigned long long avbPTPInstance0ClockIdentifier;
@property (readonly, nonatomic) unsigned long long avbPTPInstance1ClockIdentifier;
@property (readonly, nonatomic) unsigned long long avbPTPInstance2ClockIdentifier;
@property (readonly, nonatomic) unsigned long long avbPTPInstance3ClockIdentifier;
@property (readonly, nonatomic) unsigned long long airPlayPTPInstanceClockIdentifier;
@property (readonly, nonatomic) unsigned long long copresencePTPInstanceClockIdentifier;
@property (readonly, nonatomic) unsigned long long systemDomainClockIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)serviceName;
+ (void)_setIsAvailable;
+ (void)_setIsUnavailable;
+ (id)clientProtocol;
+ (id)serverProtocol;

- (void).cxx_destruct;
- (id)exportedObject;
- (BOOL)addCopresencePTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)addAVBPTPInstanceIndex:(unsigned short)a0 identifier:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)addAirPlayPTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)addPTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)addTimeOfDayPTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (id)initWithgPTPManager:(id)a0;
- (void)interruptedConnection;
- (BOOL)removeAVBPTPInstanceWithIndex:(unsigned short)a0 error:(id *)a1;
- (BOOL)removeAirPlayPTPInstanceWithError:(id *)a0;
- (BOOL)removeCopresencePTPInstanceWithError:(id *)a0;
- (BOOL)removePTPInstanceWithIdentifier:(unsigned long long)a0 error:(id *)a1;

@end
