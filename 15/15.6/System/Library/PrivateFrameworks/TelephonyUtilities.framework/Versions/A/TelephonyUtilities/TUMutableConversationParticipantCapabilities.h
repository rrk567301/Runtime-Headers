@interface TUMutableConversationParticipantCapabilities : TUConversationParticipantCapabilities

@property (nonatomic, getter=isMomentsAvailable) char momentsAvailable;
@property (nonatomic, getter=isScreenSharingAvailable) char screenSharingAvailable;
@property (nonatomic, getter=isGondolaCallingAvailable) char gondolaCallingAvailable;
@property (nonatomic, getter=isPersonaAvailable) char personaAvailable;
@property (nonatomic, getter=isGFTDowngradeToOneToOneAvailable) char gftDowngradeToOneToOneAvailable;
@property (nonatomic, getter=isUPlusNDowngradeAvailable) char uPlusNDowngradeAvailable;
@property (nonatomic, getter=isUPlusOneScreenShareAvailable) char uPlusOneScreenShareAvailable;
@property (nonatomic, getter=isUPlusOneAVLessAvailable) char uPlusOneAVLessAvailable;
@property (nonatomic, getter=isUPlusOneVisionToVisionAvailable) char uPlusOneVisionToVisionAvailable;
@property (nonatomic) unsigned long long sharePlayProtocolVersion;
@property (nonatomic) char supportsLeaveContext;
@property (nonatomic) char supportsRequestToScreenShare;
@property (nonatomic, getter=isPhotosSharePlayAvailable) char photosSharePlayAvailable;


@end
