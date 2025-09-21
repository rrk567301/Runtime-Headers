@class NSString, NSData;

@interface TRILogNamespace : PBCodable <NSCopying> {
    struct { unsigned char rolloutCount : 1; unsigned char hashIncludesDefaults : 1; } _has;
}

@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) char hasHashData;
@property (retain, nonatomic) NSData *hashData;
@property (nonatomic) char hasHashIncludesDefaults;
@property (nonatomic) char hashIncludesDefaults;
@property (readonly, nonatomic) char hasLatestRolloutId;
@property (retain, nonatomic) NSString *latestRolloutId;
@property (nonatomic) char hasRolloutCount;
@property (nonatomic) unsigned int rolloutCount;

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
