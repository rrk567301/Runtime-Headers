@class DRSProtoRequestDescription, NSString;

@interface DRSProtoEnableDataGatheringRequest : PBRequest <NSCopying> {
    struct { unsigned char isContinue : 1; } _has;
}

@property (readonly, nonatomic) char hasRequestDescription;
@property (retain, nonatomic) DRSProtoRequestDescription *requestDescription;
@property (readonly, nonatomic) char hasLogType;
@property (retain, nonatomic) NSString *logType;
@property (nonatomic) char hasIsContinue;
@property (nonatomic) char isContinue;

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

@end
