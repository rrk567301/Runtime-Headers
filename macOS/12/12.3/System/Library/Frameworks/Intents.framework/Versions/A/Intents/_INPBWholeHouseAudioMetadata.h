@class NSArray, NSString;

@interface _INPBWholeHouseAudioMetadata : PBCodable <_INPBWholeHouseAudioMetadata, NSSecureCoding, NSCopying> {
    struct { unsigned char hasExcept : 1; unsigned char isAllSpeakers : 1; unsigned char isInHere : 1; unsigned char isParticipatingSpeaker : 1; unsigned char isPauseOrStop : 1; unsigned char isWholeHouseAudioCommand : 1; unsigned char numberOfHomeAutomationWords : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL hasExcept;
@property (nonatomic) BOOL hasHasExcept;
@property (copy, nonatomic) NSArray *intentDestinationSpeakers;
@property (readonly, nonatomic) unsigned long long intentDestinationSpeakersCount;
@property (copy, nonatomic) NSArray *intentPermanentNames;
@property (readonly, nonatomic) unsigned long long intentPermanentNamesCount;
@property (copy, nonatomic) NSArray *intentSpeakerNames;
@property (readonly, nonatomic) unsigned long long intentSpeakerNamesCount;
@property (copy, nonatomic) NSArray *intentSpeakerRooms;
@property (readonly, nonatomic) unsigned long long intentSpeakerRoomsCount;
@property (nonatomic) BOOL isAllSpeakers;
@property (nonatomic) BOOL hasIsAllSpeakers;
@property (nonatomic) BOOL isInHere;
@property (nonatomic) BOOL hasIsInHere;
@property (nonatomic) BOOL isParticipatingSpeaker;
@property (nonatomic) BOOL hasIsParticipatingSpeaker;
@property (nonatomic) BOOL isPauseOrStop;
@property (nonatomic) BOOL hasIsPauseOrStop;
@property (nonatomic) BOOL isWholeHouseAudioCommand;
@property (nonatomic) BOOL hasIsWholeHouseAudioCommand;
@property (nonatomic) int numberOfHomeAutomationWords;
@property (nonatomic) BOOL hasNumberOfHomeAutomationWords;
@property (copy, nonatomic) NSArray *permanentNames;
@property (readonly, nonatomic) unsigned long long permanentNamesCount;
@property (copy, nonatomic) NSArray *speakerNames;
@property (readonly, nonatomic) unsigned long long speakerNamesCount;
@property (copy, nonatomic) NSArray *speakerRooms;
@property (readonly, nonatomic) unsigned long long speakerRoomsCount;
@property (copy, nonatomic) NSArray *spokenEntityNames;
@property (readonly, nonatomic) unsigned long long spokenEntityNamesCount;
@property (copy, nonatomic) NSArray *spokenEntityTypes;
@property (readonly, nonatomic) unsigned long long spokenEntityTypesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)intentDestinationSpeakersType;
+ (Class)intentPermanentNamesType;
+ (Class)intentSpeakerNamesType;
+ (Class)intentSpeakerRoomsType;
+ (Class)permanentNamesType;
+ (Class)speakerNamesType;
+ (Class)speakerRoomsType;
+ (Class)spokenEntityNameType;
+ (Class)spokenEntityTypeType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addIntentDestinationSpeakers:(id)a0;
- (void)addIntentPermanentNames:(id)a0;
- (void)addIntentSpeakerNames:(id)a0;
- (void)addIntentSpeakerRooms:(id)a0;
- (void)addPermanentNames:(id)a0;
- (void)addSpeakerNames:(id)a0;
- (void)addSpeakerRooms:(id)a0;
- (void)addSpokenEntityName:(id)a0;
- (void)addSpokenEntityType:(id)a0;
- (void)clearIntentDestinationSpeakers;
- (id)intentDestinationSpeakersAtIndex:(unsigned long long)a0;
- (void)clearIntentPermanentNames;
- (id)intentPermanentNamesAtIndex:(unsigned long long)a0;
- (void)clearIntentSpeakerNames;
- (id)intentSpeakerNamesAtIndex:(unsigned long long)a0;
- (void)clearIntentSpeakerRooms;
- (id)intentSpeakerRoomsAtIndex:(unsigned long long)a0;
- (void)clearPermanentNames;
- (id)permanentNamesAtIndex:(unsigned long long)a0;
- (void)clearSpeakerNames;
- (id)speakerNamesAtIndex:(unsigned long long)a0;
- (void)clearSpeakerRooms;
- (id)speakerRoomsAtIndex:(unsigned long long)a0;
- (void)clearSpokenEntityNames;
- (id)spokenEntityNameAtIndex:(unsigned long long)a0;
- (void)clearSpokenEntityTypes;
- (id)spokenEntityTypeAtIndex:(unsigned long long)a0;

@end
