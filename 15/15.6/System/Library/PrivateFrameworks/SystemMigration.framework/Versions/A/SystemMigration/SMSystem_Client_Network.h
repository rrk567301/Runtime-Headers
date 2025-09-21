@class NSString, NSImage, NSOrderedSet, NSDictionary, NSNumber;

@interface SMSystem_Client_Network : SMSystem_Client

@property (retain) NSImage *icon;
@property (retain) NSNumber *passcode;
@property (retain) NSString *handoffHint;
@property char connected;
@property (retain) NSOrderedSet *fasterInterfaceRecommendations;
@property (retain) NSDictionary *allEstablishedConnections;
@property char availableInSystemLists;
@property (readonly) NSString *model;
@property unsigned long long networkState;
@property (readonly) char sourceKnowsPasscode;
@property (readonly) NSString *fasterInterfaceRecommendation;
@property (readonly) unsigned long long effectiveConnectionMethod;
@property (readonly) NSOrderedSet *connectionFamilies;
@property char isAttemptingWirelessSwitch;

+ (void)initialize;
+ (id)guiMonitorKeys;
+ (id)keyPathsForValuesAffectingFasterInterfaceRecommendation;
+ (id)longTermIdentifierWithNameMatch:(id)a0;

- (void).cxx_destruct;
- (id)displayName;
- (id)displayState;
- (char)isMounted;
- (long long)defaultUIRank;
- (char)matchesLongTermIdentifier:(id)a0;
- (id)volumeIconAccesibilityLabel;

@end
