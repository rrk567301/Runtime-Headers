@class NSMutableArray;

@interface TVRMSBeginDiscoveryMessage : PBCodable <NSCopying> {
    struct { unsigned char discoveryTypes : 1; unsigned char hasPairedNetworkNames : 1; } _has;
}

@property (nonatomic) BOOL hasDiscoveryTypes;
@property (nonatomic) int discoveryTypes;
@property (retain, nonatomic) NSMutableArray *pairedNetworkNames;
@property (nonatomic) BOOL hasHasPairedNetworkNames;
@property (nonatomic) BOOL hasPairedNetworkNames;

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
- (void)addPairedNetworkNames:(id)a0;
- (void)clearPairedNetworkNames;
- (id)pairedNetworkNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)pairedNetworkNamesCount;

@end
