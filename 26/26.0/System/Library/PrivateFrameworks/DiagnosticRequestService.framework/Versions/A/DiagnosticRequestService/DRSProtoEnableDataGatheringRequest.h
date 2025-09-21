@class DRSProtoRequestDescription, NSString;

@interface DRSProtoEnableDataGatheringRequest : PBRequest <NSCopying> {
    struct { unsigned char isContinue : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRequestDescription;
@property (retain, nonatomic) DRSProtoRequestDescription *requestDescription;
@property (readonly, nonatomic) BOOL hasLogType;
@property (retain, nonatomic) NSString *logType;
@property (nonatomic) BOOL hasIsContinue;
@property (nonatomic) BOOL isContinue;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
