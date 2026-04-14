@class NSString;

@interface NTPBNetworkEventGroup : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasVia;
@property (retain, nonatomic) NSString *via;
@property (readonly, nonatomic) BOOL hasRespondingInstance;
@property (retain, nonatomic) NSString *respondingInstance;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
