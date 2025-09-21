@class NSData;

@interface BCSCallerIdShardItem : PBCodable <NSCopying> {
    struct { unsigned char count : 1; unsigned char index : 1; unsigned char ttl : 1; } _has;
}

@property (nonatomic) BOOL hasIndex;
@property (nonatomic) long long index;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) long long count;
@property (nonatomic) BOOL hasTtl;
@property (nonatomic) long long ttl;
@property (readonly, nonatomic) BOOL hasFilter;
@property (retain, nonatomic) NSData *filter;

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
