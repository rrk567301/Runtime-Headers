@class NSString;

@interface BRFieldStructureSignature : PBCodable <BRFieldVersionSignature, NSCopying>

@property (readonly, nonatomic) NSString *versionIdentifier;
@property (readonly, nonatomic) char hasOldVersionIdentifier;
@property (readonly, nonatomic) NSString *oldVersionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *versionIdentifier;
@property (readonly, nonatomic) char hasOldVersionIdentifier;
@property (retain, nonatomic) NSString *oldVersionIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)etag;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithLocalStatInfo:(id)a0;
- (char)isEquivalentToSignature:(id)a0;

@end
