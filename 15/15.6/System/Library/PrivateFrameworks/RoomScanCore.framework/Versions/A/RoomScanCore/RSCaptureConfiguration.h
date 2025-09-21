@interface RSCaptureConfiguration : NSObject <NSCopying> {
    char _mirrorDetectionEnabled;
    char _curvedWallEnabled;
    char _uniformHeightPolygonEnabled;
    unsigned long long _coachingMaxFrameRate;
}

@property (nonatomic, getter=isWindowDoorDetectionEnabled) char windowDoorDetectionEnabled;
@property (nonatomic, getter=isLiveResultEnabled) char liveResultEnabled;
@property (nonatomic, getter=isTextCoachingEnabled) char textCoachingEnabled;
@property (nonatomic, getter=isOnboardingEnabled) char onboardingEnabled;
@property (nonatomic, getter=isObjectBeautificationEnabled) char objectBeautificationEnabled;
@property (nonatomic, getter=isStandardizationEnabled) char standardizationEnabled;
@property (nonatomic, getter=isMarkerCoachingEnabled) char markerCoachingEnabled;
@property (nonatomic, getter=isDoorWindowBeautificationEnabled) char doorWindowBeautificationEnabled;
@property (nonatomic, getter=isDriftDetectionEnabled) char driftDetectionEnabled;
@property (nonatomic, getter=isNonUniformHeightEnabled) char nonUniformHeightEnabled;
@property (nonatomic, getter=isOpeningReplaceOpendoorEnabled) char openingReplaceOpendoorEnabled;
@property (nonatomic, getter=isOpendoorReplaceOpeningEnabled) char opendoorReplaceOpeningEnabled;
@property (nonatomic, getter=isDoorReplaceOpeningEnabled) char doorReplaceOpeningEnabled;
@property (nonatomic, getter=isBoundaryRefinementEnabled) char boundaryRefinementEnabled;
@property (nonatomic, getter=isBayWindowRecessedAreaEnabled) char bayWindowRecessedAreaEnabled;
@property (nonatomic) unsigned long long maxFramerate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
