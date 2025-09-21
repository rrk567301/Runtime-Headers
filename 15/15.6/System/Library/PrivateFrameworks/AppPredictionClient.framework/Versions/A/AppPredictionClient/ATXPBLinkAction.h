@class NSString, NSData;

@interface ATXPBLinkAction : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) char hasAction;
@property (retain, nonatomic) NSData *action;

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
