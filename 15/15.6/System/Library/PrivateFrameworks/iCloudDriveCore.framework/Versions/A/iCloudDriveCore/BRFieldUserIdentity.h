@class NSData, NSPersonNameComponents;

@interface BRFieldUserIdentity : PBCodable <NSCopying>

@property (retain, nonatomic) NSPersonNameComponents *nameComponents;
@property (readonly, nonatomic) char hasSerializedNameComponents;
@property (retain, nonatomic) NSData *serializedNameComponents;

+ (id)unknownPersonNameComponents;

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
- (id)initWithCKUserIdentity:(id)a0;
- (id)nameComponentsAcceptUnknownUser:(char)a0;

@end
