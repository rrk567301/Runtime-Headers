@class NSString, IRHistoryEventMO, IRReplayEventMO, NSDate;

@interface IRSystemStateMO : NSManagedObject

@property (retain, nonatomic) NSString *appInFocusBundleID;
@property (nonatomic) char appInFocusWindowValid;
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
@property (nonatomic) unsigned long long outputDeviceType;
@property (nonatomic) unsigned long long outputDeviceSubType;
@property (retain, nonatomic) NSString *predictedOutputDeviceName;
@property (nonatomic) unsigned long long predictedOutputDeviceType;
@property (nonatomic) unsigned long long predictedOutputDeviceSubType;
@property (nonatomic) char appInFocusWindowScreenUnlockEvent;
@property (nonatomic) char pdrFenceActive;
@property (retain, nonatomic) NSDate *latestPickerChoiceDate;
@property (nonatomic) char isContinuityDisplay;
@property (nonatomic) char displayOn;

+ (id)fetchRequest;
+ (void)setPropertiesOfSystemStateMO:(id)a0 withSystemState:(id)a1;
+ (id)systemStateMOWithSystemStateDO:(id)a0 historyEventMO:(id)a1 inManagedObjectContext:(id)a2;
+ (id)systemStateMOWithSystemStateDO:(id)a0 replayEventMO:(id)a1 inManagedObjectContext:(id)a2;

- (id)convert;

@end
