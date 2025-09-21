@class NSString, IRHistoryEventMO, IRReplayEventMO, NSDate;

@interface IRSystemStateMO : NSManagedObject

@property (retain, nonatomic) NSString *appInFocusBundleID;
@property (nonatomic) BOOL appInFocusWindowValid;
@property (retain, nonatomic) NSString *deviceWiFiSSID;
@property (nonatomic) int locationSemanticUserSpecificPlaceType;
@property (retain, nonatomic) NSString *iCloudId;
@property (retain, nonatomic) NSString *locationSemanticLoiIdentifier;
@property (retain, nonatomic) NSString *avInitialRouteSharingPolicy;
@property (retain, nonatomic) NSString *mediaRouteGroupLeaderOutputDeviceID;
@property (retain, nonatomic) IRHistoryEventMO *historyEvent;
@property (retain, nonatomic) IRReplayEventMO *replayEvent;
@property (nonatomic) long long timeZoneSeconds;
@property (retain, nonatomic) NSString *outputDeviceName;
@property (nonatomic) long long outputDeviceType;
@property (nonatomic) long long outputDeviceSubType;
@property (retain, nonatomic) NSString *predictedOutputDeviceName;
@property (nonatomic) long long predictedOutputDeviceType;
@property (nonatomic) long long predictedOutputDeviceSubType;
@property (nonatomic) BOOL appInFocusWindowScreenUnlockEvent;
@property (nonatomic) BOOL pdrFenceActive;
@property (retain, nonatomic) NSDate *latestPickerChoiceDate;
@property (nonatomic) BOOL isContinuityDisplay;
@property (nonatomic) BOOL displayOn;

+ (id)fetchRequest;
+ (void)setPropertiesOfSystemStateMO:(id)a0 withSystemState:(id)a1;
+ (id)systemStateMOWithSystemStateDO:(id)a0 historyEventMO:(id)a1 inManagedObjectContext:(id)a2;
+ (id)systemStateMOWithSystemStateDO:(id)a0 replayEventMO:(id)a1 inManagedObjectContext:(id)a2;

- (id)convert;

@end
