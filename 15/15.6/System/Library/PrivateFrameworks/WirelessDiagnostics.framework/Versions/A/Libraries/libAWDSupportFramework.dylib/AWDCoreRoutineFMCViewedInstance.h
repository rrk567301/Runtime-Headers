@class NSString;

@interface AWDCoreRoutineFMCViewedInstance : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char uiPlacement : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasParkingId;
@property (retain, nonatomic) NSString *parkingId;
@property (nonatomic) char hasUiPlacement;
@property (nonatomic) int uiPlacement;

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
