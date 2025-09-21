@class MSPMediaSyncError, MSPMediaSyncHeader, MSPMediaSyncOperation;

@interface MSPMediaSyncPackage : PBCodable <NSCopying> {
    struct { unsigned char type : 1; unsigned char lastPackage : 1; } _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasLastPackage;
@property (nonatomic) char lastPackage;
@property (readonly, nonatomic) char hasHeader;
@property (retain, nonatomic) MSPMediaSyncHeader *header;
@property (readonly, nonatomic) char hasSyncOperation;
@property (retain, nonatomic) MSPMediaSyncOperation *syncOperation;
@property (readonly, nonatomic) char hasError;
@property (retain, nonatomic) MSPMediaSyncError *error;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;

@end
