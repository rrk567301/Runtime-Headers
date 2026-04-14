@class NSString;

@interface NTPBNetworkEventGroup : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasVia;
@property (retain, nonatomic) NSString *via;
@property (readonly, nonatomic) BOOL hasRespondingInstance;
@property (retain, nonatomic) NSString *respondingInstance;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
