@class NSString;

@interface BRFieldStructureSignature : PBCodable <BRFieldVersionSignature, NSCopying>

@property (readonly, nonatomic) NSString *versionIdentifier;
@property (readonly, nonatomic) BOOL hasOldVersionIdentifier;
@property (readonly, nonatomic) NSString *oldVersionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *versionIdentifier;
@property (readonly, nonatomic) BOOL hasOldVersionIdentifier;
@property (retain, nonatomic) NSString *oldVersionIdentifier;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)initWithLocalStatInfo:(id)a0;
- (id)etag;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEquivalentToSignature:(id)a0;

@end
