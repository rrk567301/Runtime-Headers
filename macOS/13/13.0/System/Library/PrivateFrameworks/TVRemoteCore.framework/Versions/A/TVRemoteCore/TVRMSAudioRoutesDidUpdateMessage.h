@class NSMutableArray;

@interface TVRMSAudioRoutesDidUpdateMessage : PBCodable <NSCopying> {
    struct { unsigned char sessionIdentifier : 1; } _has;
}

@property (nonatomic) BOOL hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;
@property (retain, nonatomic) NSMutableArray *audioRoutes;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearAudioRoutes;
- (void)addAudioRoutes:(id)a0;
- (unsigned long long)audioRoutesCount;
- (id)audioRoutesAtIndex:(unsigned long long)a0;

@end
