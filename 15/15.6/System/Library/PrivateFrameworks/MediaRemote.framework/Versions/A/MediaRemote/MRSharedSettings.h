@interface MRSharedSettings : NSObject

@property (class, readonly, nonatomic) MRSharedSettings *currentSettings;

@property (readonly, nonatomic, getter=isMultiplayerAware) char multiplayerAware;
@property (readonly, nonatomic, getter=isMultiplayerHost) char multiplayerHost;
@property (readonly, nonatomic) char canHostMultiplayerStream;
@property (readonly, nonatomic) char supportNanoStandalone;
@property (readonly, nonatomic) char supportShowMore;
@property (readonly, nonatomic) char supportNowPlayingSessionDataSource;
@property (readonly, nonatomic) char supportSessionBasedUI;
@property (readonly, nonatomic) char supportSessionBasedLockScreenPlatter;
@property (readonly, nonatomic) char supportLockScreenBackground;
@property (readonly, nonatomic) double quickControlsInactiveTimeout;
@property (readonly, nonatomic) double lockScreenAPLTarget;
@property (readonly, nonatomic) double lockScreenAPLRatio;
@property (readonly, nonatomic) char supportGroupSession;
@property (readonly, nonatomic) char supportGroupSessionHome;
@property (readonly, nonatomic) char supportGroupSessionHomePodBoop;
@property (readonly, nonatomic) char supportAirPlayLeaderInfoSync;
@property (readonly, nonatomic) char allowSingleRoomExpandedRows;
@property (readonly, nonatomic) char showMembersInsteadOfRooms;
@property (readonly, nonatomic) double oneTapSuggestionInactiveTimeout;
@property (readonly, nonatomic) double autoRouteInactiveTimeout;
@property (readonly, nonatomic) double afterRoutingCompleteTimeout;
@property (readonly, nonatomic) char supportManyRecommendationsPlatters;
@property (readonly, nonatomic) char suppressScreenMirroringErrors;
@property (readonly, nonatomic) char verboseImageLoadingLogging;
@property (readonly, nonatomic) char verboseMediaControlLogging;
@property (readonly, nonatomic) char supportPTOTRefactorPart2;

@end
