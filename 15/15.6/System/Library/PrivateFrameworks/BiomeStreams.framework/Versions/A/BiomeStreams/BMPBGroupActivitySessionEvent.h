@class NSString, NSMutableArray;

@interface BMPBGroupActivitySessionEvent : PBCodable <NSCopying> {
    struct { unsigned char isActive : 1; } _has;
}

@property (nonatomic) char hasIsActive;
@property (nonatomic) char isActive;
@property (readonly, nonatomic) char hasSourceBundleId;
@property (retain, nonatomic) NSString *sourceBundleId;
@property (readonly, nonatomic) char hasActivitySessionId;
@property (retain, nonatomic) NSString *activitySessionId;
@property (readonly, nonatomic) char hasActivityId;
@property (retain, nonatomic) NSString *activityId;
@property (readonly, nonatomic) char hasMessagesChatGuid;
@property (retain, nonatomic) NSString *messagesChatGuid;
@property (readonly, nonatomic) char hasExperienceType;
@property (retain, nonatomic) NSString *experienceType;
@property (retain, nonatomic) NSMutableArray *participantHandles;
@property (retain, nonatomic) NSMutableArray *memberHandles;

+ (Class)memberHandlesType;
+ (Class)participantHandlesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addMemberHandles:(id)a0;
- (void)addParticipantHandles:(id)a0;
- (void)clearMemberHandles;
- (void)clearParticipantHandles;
- (id)memberHandlesAtIndex:(unsigned long long)a0;
- (unsigned long long)memberHandlesCount;
- (id)participantHandlesAtIndex:(unsigned long long)a0;
- (unsigned long long)participantHandlesCount;

@end
