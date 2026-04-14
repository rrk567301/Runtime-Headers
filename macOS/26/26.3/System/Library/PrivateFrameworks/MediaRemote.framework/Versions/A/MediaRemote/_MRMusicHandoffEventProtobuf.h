@class NSString;

@interface _MRMusicHandoffEventProtobuf : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSessionIdentifier;
@property (retain, nonatomic) NSString *sessionIdentifier;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;

- (id)dictionaryRepresentation;
- (id)typeAsString:(int)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)StringAsType:(id)a0;

@end
