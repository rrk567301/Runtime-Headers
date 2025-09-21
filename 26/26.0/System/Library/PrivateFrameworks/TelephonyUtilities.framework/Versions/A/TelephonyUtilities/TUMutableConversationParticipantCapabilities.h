@interface TUMutableConversationParticipantCapabilities : TUConversationParticipantCapabilities

@property (nonatomic, getter=isMomentsAvailable) BOOL momentsAvailable;
@property (nonatomic, getter=isScreenSharingAvailable) BOOL screenSharingAvailable;
@property (nonatomic, getter=isGondolaCallingAvailable) BOOL gondolaCallingAvailable;
@property (nonatomic, getter=isPersonaAvailable) BOOL personaAvailable;
@property (nonatomic, getter=isGFTDowngradeToOneToOneAvailable) BOOL gftDowngradeToOneToOneAvailable;
@property (nonatomic, getter=isUPlusNDowngradeAvailable) BOOL uPlusNDowngradeAvailable;
@property (nonatomic, getter=isUPlusOneScreenShareAvailable) BOOL uPlusOneScreenShareAvailable;
@property (nonatomic, getter=isUPlusOneAVLessAvailable) BOOL uPlusOneAVLessAvailable;
@property (nonatomic, getter=isUPlusOneVisionToVisionAvailable) BOOL uPlusOneVisionToVisionAvailable;
@property (nonatomic) unsigned long long sharePlayProtocolVersion;
@property (nonatomic) BOOL supportsLeaveContext;
@property (nonatomic) BOOL supportsRequestToScreenShare;
@property (nonatomic, getter=isPhotosSharePlayAvailable) BOOL photosSharePlayAvailable;
@property (nonatomic, getter=isTranslationAvailable) BOOL translationAvailable;


@end
