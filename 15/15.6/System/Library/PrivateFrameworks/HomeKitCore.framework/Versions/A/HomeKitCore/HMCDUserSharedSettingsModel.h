@class NSUUID, HMCDUserModel;

@interface HMCDUserSharedSettingsModel : NSManagedObject

@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic) char isExplicitContentAllowed;
@property (nonatomic) char isiTunesAccountAllowed;
@property (nonatomic) char isDolbyAtmosEnabled;
@property (nonatomic) char isLosslessMusicEnabled;
@property (nonatomic) char isPlaybackInfluencesEnabled;
@property (nonatomic) char isSiriIdentifyVoiceEnabled;
@property (nonatomic, retain) HMCDUserModel *user;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
