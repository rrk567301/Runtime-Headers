@class NSUUID, NSNumber;

@interface HMCDUserSharedSettingsModel : NSManagedObject

@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, retain) NSNumber *isExplicitContentAllowed;
@property (nonatomic, retain) NSNumber *isiTunesAccountAllowed;
@property (nonatomic, retain) NSNumber *isDolbyAtmosEnabled;
@property (nonatomic, retain) NSNumber *isLosslessMusicEnabled;
@property (nonatomic, retain) NSNumber *isPlaybackInfluencesEnabled;
@property (nonatomic, retain) NSNumber *isSiriIdentifyVoiceEnabled;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
