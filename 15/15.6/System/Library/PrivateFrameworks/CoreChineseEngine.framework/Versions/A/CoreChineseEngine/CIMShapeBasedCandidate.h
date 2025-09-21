@class NSString, CIMDisplayCandidateFadeProperties;

@interface CIMShapeBasedCandidate : CIMCandidate

@property (retain, nonatomic) CIMDisplayCandidateFadeProperties *annotationFade;
@property (copy, nonatomic) NSString *inputModeName;
@property (nonatomic) char readingIsShort;
@property (nonatomic) char showReading;
@property (nonatomic) void *mecabraCandidate;

+ (id)shapeBasedCandidateWithCandidate:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)colorsForNumberOfFadingCharacters:(unsigned long long)a0;
- (id)defaultReadingAttributes;
- (id)fadingAnnotation;
- (char)isWubiConvertedByPinyin;
- (id)readingColor;

@end
