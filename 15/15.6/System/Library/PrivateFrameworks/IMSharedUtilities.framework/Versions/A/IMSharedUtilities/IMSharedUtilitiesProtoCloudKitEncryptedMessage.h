@class NSString, NSData;

@interface IMSharedUtilitiesProtoCloudKitEncryptedMessage : PBCodable <NSCopying> {
    struct { unsigned char associatedMessageType : 1; unsigned char expireState : 1; unsigned char timeDelivered : 1; unsigned char timeExpressiveSentPlayed : 1; unsigned char timePlayed : 1; unsigned char timeRead : 1; unsigned char associatedMessageRangeLength : 1; unsigned char associatedMessageRangeLocation : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) char hasVersion;
@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) char hasMessageSubject;
@property (retain, nonatomic) NSString *messageSubject;
@property (readonly, nonatomic) char hasMessageBody;
@property (retain, nonatomic) NSString *messageBody;
@property (readonly, nonatomic) char hasMessageBodyData;
@property (retain, nonatomic) NSData *messageBodyData;
@property (readonly, nonatomic) char hasBaloonBundleId;
@property (retain, nonatomic) NSString *baloonBundleId;
@property (readonly, nonatomic) char hasPayloadData;
@property (retain, nonatomic) NSData *payloadData;
@property (readonly, nonatomic) char hasMessageSummaryInfo;
@property (retain, nonatomic) NSData *messageSummaryInfo;
@property (readonly, nonatomic) char hasExpressiveSendId;
@property (retain, nonatomic) NSString *expressiveSendId;
@property (nonatomic) char hasTimeRead;
@property (nonatomic) unsigned long long timeRead;
@property (nonatomic) char hasTimePlayed;
@property (nonatomic) unsigned long long timePlayed;
@property (nonatomic) char hasTimeExpressiveSentPlayed;
@property (nonatomic) unsigned long long timeExpressiveSentPlayed;
@property (readonly, nonatomic) char hasPadding;
@property (retain, nonatomic) NSData *padding;
@property (nonatomic) char hasTimeDelivered;
@property (nonatomic) unsigned long long timeDelivered;
@property (nonatomic) char hasExpireState;
@property (nonatomic) unsigned long long expireState;
@property (nonatomic) char hasAssociatedMessageType;
@property (nonatomic) long long associatedMessageType;
@property (readonly, nonatomic) char hasAssociatedMessageGuid;
@property (retain, nonatomic) NSString *associatedMessageGuid;
@property (nonatomic) char hasAssociatedMessageRangeLocation;
@property (nonatomic) unsigned int associatedMessageRangeLocation;
@property (nonatomic) char hasAssociatedMessageRangeLength;
@property (nonatomic) unsigned int associatedMessageRangeLength;

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
