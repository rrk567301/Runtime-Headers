@class NSString, _INPBDictionary, NSArray, _INPBArchivedObject;

@interface _INPBRunVoiceCommandIntentResponse : PBCodable <_INPBRunVoiceCommandIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char continueRunning : 1; unsigned char customResponsesDisabled : 1; unsigned char intentCategory : 1; unsigned char interstitialDisabled : 1; unsigned char prefersExecutionOnCompanion : 1; unsigned char toggleState : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *appBundleId;
@property (readonly, nonatomic) char hasAppBundleId;
@property (nonatomic) char continueRunning;
@property (nonatomic) char hasContinueRunning;
@property (nonatomic) char customResponsesDisabled;
@property (nonatomic) char hasCustomResponsesDisabled;
@property (nonatomic) int intentCategory;
@property (nonatomic) char hasIntentCategory;
@property (nonatomic) char interstitialDisabled;
@property (nonatomic) char hasInterstitialDisabled;
@property (copy, nonatomic) NSString *localizedAppName;
@property (readonly, nonatomic) char hasLocalizedAppName;
@property (retain, nonatomic) _INPBDictionary *parameters;
@property (readonly, nonatomic) char hasParameters;
@property (nonatomic) char prefersExecutionOnCompanion;
@property (nonatomic) char hasPrefersExecutionOnCompanion;
@property (copy, nonatomic) NSString *responseTemplate;
@property (readonly, nonatomic) char hasResponseTemplate;
@property (copy, nonatomic) NSArray *steps;
@property (readonly, nonatomic) unsigned long long stepsCount;
@property (nonatomic) int toggleState;
@property (nonatomic) char hasToggleState;
@property (retain, nonatomic) _INPBArchivedObject *underlyingIntent;
@property (readonly, nonatomic) char hasUnderlyingIntent;
@property (retain, nonatomic) _INPBArchivedObject *underlyingIntentResponse;
@property (readonly, nonatomic) char hasUnderlyingIntentResponse;
@property (copy, nonatomic) NSString *underlyingIntentTitle;
@property (readonly, nonatomic) char hasUnderlyingIntentTitle;
@property (copy, nonatomic) NSString *verb;
@property (readonly, nonatomic) char hasVerb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)stepType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addStep:(id)a0;
- (void)clearSteps;
- (id)stepAtIndex:(unsigned long long)a0;
- (int)StringAsIntentCategory:(id)a0;
- (int)StringAsToggleState:(id)a0;
- (id)intentCategoryAsString:(int)a0;
- (id)toggleStateAsString:(int)a0;

@end
