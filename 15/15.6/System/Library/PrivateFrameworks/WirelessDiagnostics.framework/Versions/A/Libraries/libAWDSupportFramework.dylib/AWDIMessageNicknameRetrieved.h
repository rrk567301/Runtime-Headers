@class NSString;

@interface AWDIMessageNicknameRetrieved : PBCodable <NSCopying> {
    struct { unsigned char timeTaken : 1; unsigned char timestamp : 1; unsigned char connectionType : 1; unsigned char hasAvatar : 1; unsigned char linkQuality : 1; unsigned char publicOperationalErrorCode : 1; unsigned char publicSuccess : 1; unsigned char updated : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasTimeTaken;
@property (nonatomic) unsigned long long timeTaken;
@property (nonatomic) char hasUpdated;
@property (nonatomic) unsigned int updated;
@property (nonatomic) char hasHasAvatar;
@property (nonatomic) unsigned int hasAvatar;
@property (nonatomic) char hasPublicSuccess;
@property (nonatomic) unsigned int publicSuccess;
@property (readonly, nonatomic) char hasPublicOperationalErrorDomain;
@property (retain, nonatomic) NSString *publicOperationalErrorDomain;
@property (nonatomic) char hasPublicOperationalErrorCode;
@property (nonatomic) unsigned int publicOperationalErrorCode;
@property (nonatomic) char hasLinkQuality;
@property (nonatomic) int linkQuality;
@property (nonatomic) char hasConnectionType;
@property (nonatomic) unsigned int connectionType;

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
