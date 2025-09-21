@class NSString, NSData;

@interface IMSharedUtilitiesProtoCloudKitEncryptedMessageP4 : PBCodable <NSCopying> {
    struct { unsigned char timeRecovered : 1; unsigned char scheduleState : 1; unsigned char scheduleType : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) char hasVersion;
@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) char hasAssociatedMessageEmoji;
@property (retain, nonatomic) NSString *associatedMessageEmoji;
@property (readonly, nonatomic) char hasPadding;
@property (retain, nonatomic) NSData *padding;
@property (readonly, nonatomic) char hasActualService;
@property (retain, nonatomic) NSString *actualService;
@property (nonatomic) char hasScheduleType;
@property (nonatomic) unsigned int scheduleType;
@property (nonatomic) char hasScheduleState;
@property (nonatomic) unsigned int scheduleState;
@property (readonly, nonatomic) char hasActualParentChatId;
@property (retain, nonatomic) NSString *actualParentChatId;
@property (nonatomic) char hasTimeRecovered;
@property (nonatomic) unsigned long long timeRecovered;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
