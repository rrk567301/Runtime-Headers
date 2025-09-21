@class NSString, NSUUID, SABootInfo;

@interface SAMicrostackshotInfo : NSObject

@property (readonly) SABootInfo *bootInfo;
@property (readonly) unsigned long long microSnapshotFlags;
@property (readonly) double wallTime;
@property (readonly) int processID;
@property (readonly) NSString *processName;
@property (readonly) NSUUID *processMainBinaryUUID;
@property (readonly) unsigned long long processResourceCoalitionID;
@property (readonly) unsigned long long threadID;
@property (readonly) int threadOnBehalfOfProximatePid;
@property (readonly) int threadOnBehalfOfOriginPid;

- (void).cxx_destruct;

@end
