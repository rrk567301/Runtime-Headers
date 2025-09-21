@class NSString;

@interface ATXPBMinimalAction : PBCodable <NSCopying> {
    struct { unsigned char paramHash : 1; } _has;
}

@property (readonly, nonatomic) char hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) char hasActionType;
@property (retain, nonatomic) NSString *actionType;
@property (nonatomic) char hasParamHash;
@property (nonatomic) unsigned long long paramHash;

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
