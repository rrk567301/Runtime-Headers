@class NSString;

@interface MSPMediaSyncError : PBCodable <NSCopying> {
    struct { unsigned char errorCode : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) int errorCode;

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

@end
