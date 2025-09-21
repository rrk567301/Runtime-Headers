@class MSPMediaSyncError, MSPMediaSyncHeader, MSPMediaSyncOperation;

@interface MSPMediaSyncPackage : PBCodable <NSCopying> {
    struct { unsigned char type : 1; unsigned char lastPackage : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasLastPackage;
@property (nonatomic) BOOL lastPackage;
@property (readonly, nonatomic) BOOL hasHeader;
@property (retain, nonatomic) MSPMediaSyncHeader *header;
@property (readonly, nonatomic) BOOL hasSyncOperation;
@property (retain, nonatomic) MSPMediaSyncOperation *syncOperation;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) MSPMediaSyncError *error;

- (id)typeAsString:(int)a0;
- (void)copyTo:(id)a0;
- (int)StringAsType:(id)a0;
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
