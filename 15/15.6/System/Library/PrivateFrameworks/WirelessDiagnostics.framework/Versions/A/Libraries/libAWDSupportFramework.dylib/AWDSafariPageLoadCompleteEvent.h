@interface AWDSafariPageLoadCompleteEvent : PBCodable <NSCopying> {
    struct { unsigned char configurationID : 1; unsigned char errorCode : 1; unsigned char pageID : 1; unsigned char pageLoadTime : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasConfigurationID;
@property (nonatomic) unsigned long long configurationID;
@property (nonatomic) char hasPageID;
@property (nonatomic) unsigned long long pageID;
@property (nonatomic) char hasPageLoadTime;
@property (nonatomic) unsigned long long pageLoadTime;
@property (nonatomic) char hasErrorCode;
@property (nonatomic) long long errorCode;

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
