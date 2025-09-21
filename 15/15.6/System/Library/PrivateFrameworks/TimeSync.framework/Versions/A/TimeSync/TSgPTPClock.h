@class NSArray, TSDCgPTPClock;

@interface TSgPTPClock : TSKernelClock {
    TSDCgPTPClock *_impl;
}

@property (copy, nonatomic) NSArray *gptpPath;
@property (nonatomic) unsigned long long grandmasterIdentity;
@property (readonly, copy, nonatomic) NSArray *ports;
@property (readonly, nonatomic) unsigned long long clockIdentity;
@property (readonly, nonatomic) unsigned char clockPriority1;
@property (readonly, nonatomic) unsigned char clockPriority2;
@property (readonly, nonatomic) unsigned char clockClass;
@property (readonly, nonatomic) unsigned char clockAccuracy;

+ (id)keyPathsForValuesAffectingPorts;
+ (id)clockNameForClockIdentifier:(unsigned long long)a0;
+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;
+ (id)keyPathsForValuesAffectingClockAccuracy;
+ (id)keyPathsForValuesAffectingClockClass;
+ (id)keyPathsForValuesAffectingClockIdentity;
+ (id)keyPathsForValuesAffectingClockPriority1;
+ (id)keyPathsForValuesAffectingClockPriority2;
+ (id)keyPathsForValuesAffectingGptpPath;
+ (id)keyPathsForValuesAffectingGrandmasterIdentity;

- (void)dealloc;
- (void).cxx_destruct;
- (id)ports;
- (unsigned long long)convertFromDomainTimeToTimeSyncTime:(unsigned long long)a0 grandmasterUsed:(unsigned long long *)a1 portNumber:(unsigned short *)a2;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)a0 grandmasterUsed:(unsigned long long *)a1 portNumber:(unsigned short *)a2;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)a0 grandmasterUsed:(unsigned long long *)a1 portNumber:(unsigned short *)a2;
- (unsigned long long)convertFromTimeSyncTimeToDomainTime:(unsigned long long)a0 grandmasterUsed:(unsigned long long *)a1 portNumber:(unsigned short *)a2;
- (id)initWithImplDC:(id)a0;
- (char)addLinkLayerPortOnInterfaceNamed:(id)a0 allocatedPortNumber:(unsigned short *)a1 error:(id *)a2;
- (char)addLinkLayerPortOnInterfaceNamed:(id)a0 error:(id *)a1;
- (char)addReverseSyncOnInterfaceNamed:(id)a0 withDomainNumner:(unsigned char)a1 syncInterval:(unsigned int)a2 error:(id *)a3;
- (char)addUnicastLinkLayerEtEPortOnInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 allocatedPortNumber:(unsigned short *)a2 error:(id *)a3;
- (char)addUnicastLinkLayerEtEPortOnInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 error:(id *)a2;
- (char)addUnicastLinkLayerPtPPortOnInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 allocatedPortNumber:(unsigned short *)a2 error:(id *)a3;
- (char)addUnicastLinkLayerPtPPortOnInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 error:(id *)a2;
- (char)addUnicastUDPv4EtEPortOnInterfaceNamed:(id)a0 withDestinationAddress:(unsigned int)a1 allocatedPortNumber:(unsigned short *)a2 error:(id *)a3;
- (char)addUnicastUDPv4EtEPortOnInterfaceNamed:(id)a0 withDestinationAddress:(unsigned int)a1 error:(id *)a2;
- (char)addUnicastUDPv4PtPPortOnInterfaceNamed:(id)a0 withDestinationAddress:(unsigned int)a1 allocatedPortNumber:(unsigned short *)a2 error:(id *)a3;
- (char)addUnicastUDPv4PtPPortOnInterfaceNamed:(id)a0 withDestinationAddress:(unsigned int)a1 error:(id *)a2;
- (char)addUnicastUDPv6EtEPortOnInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 allocatedPortNumber:(unsigned short *)a2 error:(id *)a3;
- (char)addUnicastUDPv6EtEPortOnInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 error:(id *)a2;
- (char)addUnicastUDPv6PtPPortOnInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 allocatedPortNumber:(unsigned short *)a2 error:(id *)a3;
- (char)addUnicastUDPv6PtPPortOnInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 error:(id *)a2;
- (unsigned char)clockAccuracy;
- (unsigned char)clockClass;
- (unsigned long long)clockIdentity;
- (unsigned char)clockPriority1;
- (unsigned char)clockPriority2;
- (unsigned long long)convertFrom128BitgPTPTimeToMachAbsoluteTime:(struct { unsigned long long x0; unsigned long long x1; })a0 grandmasterUsed:(unsigned long long *)a1 portNumber:(unsigned short *)a2;
- (unsigned long long)convertFrom128BitgPTPTimeToTimeSyncTime:(struct { unsigned long long x0; unsigned long long x1; })a0 grandmasterUsed:(unsigned long long *)a1 portNumber:(unsigned short *)a2;
- (char)convertFrom32BitASTime:(unsigned int *)a0 toMachAbsoluteTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (char)convertFrom32BitASTime:(unsigned int *)a0 toTimeSyncTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (unsigned long long)convertFrom32BitASToMachAbsoluteTime:(unsigned int)a0;
- (unsigned long long)convertFrom32BitASToMachAbsoluteTime:(unsigned int)a0 withFlags:(unsigned int *)a1;
- (unsigned long long)convertFrom32BitASToTimeSyncTime:(unsigned int)a0;
- (struct { unsigned long long x0; unsigned long long x1; })convertFromMachAbsoluteTo128BitgPTPTime:(unsigned long long)a0 grandmasterUsed:(unsigned long long *)a1 portNumber:(unsigned short *)a2;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)a0 grandmasterUsed:(unsigned long long *)a1;
- (struct { unsigned long long x0; unsigned long long x1; })convertFromTimeSyncTimeTo128BitgPTPTime:(unsigned long long)a0 grandmasterUsed:(unsigned long long *)a1 portNumber:(unsigned short *)a2;
- (id)gPTPTimeFromMachAbsoluteTime:(unsigned long long)a0;
- (id)gPTPTimeFromTimeSyncTime:(unsigned long long)a0;
- (char)getMachAbsoluteRateRatioNumerator:(unsigned long long *)a0 denominator:(unsigned long long *)a1 machAnchor:(unsigned long long *)a2 andDomainAnchor:(unsigned long long *)a3 forGrandmasterIdentity:(unsigned long long *)a4 portNumber:(unsigned short *)a5 withError:(id *)a6;
- (id)getMetrics;
- (id)getMetricsWithDelta:(id)a0;
- (char)getTimeSyncTimeRateRatioNumerator:(unsigned long long *)a0 denominator:(unsigned long long *)a1 timeSyncAnchor:(unsigned long long *)a2 andDomainAnchor:(unsigned long long *)a3 forGrandmasterIdentity:(unsigned long long *)a4 portNumber:(unsigned short *)a5 withError:(id *)a6;
- (id)gptpPath;
- (unsigned long long)grandmasterIdentity;
- (unsigned long long)machAbsoluteFromgPTPTime:(id)a0;
- (id)portWithPortNumber:(unsigned short)a0;
- (char)removeLinkLayerPortFromInterfaceNamed:(id)a0 error:(id *)a1;
- (char)removeReverseSyncFromInterfaceNamed:(id)a0 withDomainNumner:(unsigned char)a1 error:(id *)a2;
- (char)removeUnicastLinkLayerEtEPortFromInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 error:(id *)a2;
- (char)removeUnicastLinkLayerPtPPortFromInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 error:(id *)a2;
- (char)removeUnicastUDPv4EtEPortFromInterfaceNamed:(id)a0 withDestinationAddress:(unsigned int)a1 error:(id *)a2;
- (char)removeUnicastUDPv4PtPPortFromInterfaceNamed:(id)a0 withDestinationAddress:(unsigned int)a1 error:(id *)a2;
- (char)removeUnicastUDPv6EtEPortFromInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 error:(id *)a2;
- (char)removeUnicastUDPv6PtPPortFromInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 error:(id *)a2;
- (unsigned long long)timeSyncTimeFromgPTPTime:(id)a0;

@end
