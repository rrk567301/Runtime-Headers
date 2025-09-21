@class NSString;

@interface AWDIDSServerStorageStateMachineCompleted : PBCodable <NSCopying> {
    struct { unsigned char linkType : 1; unsigned char timeTaken : 1; unsigned char timestamp : 1; unsigned char totalMessages : 1; unsigned char wasPrimary : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasWasPrimary;
@property (nonatomic) char wasPrimary;
@property (readonly, nonatomic) char hasServiceIdentifier;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (nonatomic) char hasTimeTaken;
@property (nonatomic) unsigned long long timeTaken;
@property (nonatomic) char hasTotalMessages;
@property (nonatomic) unsigned long long totalMessages;
@property (nonatomic) char hasLinkType;
@property (nonatomic) unsigned long long linkType;

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
