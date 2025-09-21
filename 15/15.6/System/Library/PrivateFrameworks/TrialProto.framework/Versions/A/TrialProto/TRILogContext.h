@class NSString, TRILogTime;

@interface TRILogContext : PBCodable <NSCopying> {
    struct { unsigned char processEventIndex : 1; unsigned char projectId : 1; } _has;
}

@property (nonatomic) char hasProjectId;
@property (nonatomic) unsigned int projectId;
@property (readonly, nonatomic) char hasTrackingId;
@property (retain, nonatomic) NSString *trackingId;
@property (readonly, nonatomic) char hasDeviceLogTime;
@property (retain, nonatomic) TRILogTime *deviceLogTime;
@property (readonly, nonatomic) char hasDeviceTrackingTime;
@property (retain, nonatomic) TRILogTime *deviceTrackingTime;
@property (nonatomic) char hasProcessEventIndex;
@property (nonatomic) unsigned long long processEventIndex;

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
