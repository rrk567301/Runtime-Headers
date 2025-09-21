@class NSString, NSData, NSDate;

@interface NWSProtocolSnapshot : NWSSnapshot

@property (readonly) NSDate *flowStartTimestamp;
@property (readonly) double flowDuration;
@property (readonly) unsigned long long flowStartContinuousTime;
@property (readonly) unsigned int interfaceIndex;
@property (readonly) unsigned int receiveBufferSize;
@property (readonly) unsigned int receiveBufferUsed;
@property (readonly) unsigned int trafficClass;
@property (readonly) unsigned long long uniqueProcessID;
@property (readonly) int processID;
@property (readonly) NSString *processName;
@property (readonly) unsigned long long eupid;
@property (readonly) int epid;
@property (readonly) NSString *uuid;
@property (readonly) NSString *euuid;
@property (readonly) NSString *fuuid;
@property (readonly) NSString *vuuid;
@property (readonly) NSData *localAddress;
@property (readonly) NSData *remoteAddress;
@property (readonly) char interfaceUnknown;
@property (readonly) char interfaceLoopback;
@property (readonly) char interfaceCellular;
@property (readonly) char interfaceCellularViaFallback;
@property (readonly) char interfaceCellularViaPreferredFallback;
@property (readonly) char interfaceWifi;
@property (readonly) char interfaceWired;
@property (readonly) char interfaceAWDL;
@property (readonly) char interfaceExpensive;
@property (readonly) char interfaceCompanionLink;
@property (readonly) char countsIncludeHeaderOverhead;
@property (readonly) unsigned long long networkActivityMapStartTime;
@property (readonly) unsigned long long networkActivityMapPart1;
@property (readonly) unsigned long long networkActivityMapPart2;
@property (readonly) unsigned long long eventFlags;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_createNSUUIDForBytes:(unsigned char[16])a0;
- (id)_dateWithContinuousTime:(unsigned long long)a0;
- (double)_intervalWithContinuousTime:(unsigned long long)a0;
- (double)_referenceIntervalWithContinuousTime:(unsigned long long)a0;

@end
