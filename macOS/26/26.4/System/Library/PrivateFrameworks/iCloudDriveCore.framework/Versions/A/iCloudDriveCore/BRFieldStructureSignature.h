@class NSString;

@interface BRFieldStructureSignature : PBCodable <BRFieldVersionSignature, NSCopying> {
    struct { unsigned char formatVersion : 1; } _has;
}

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
@property (readonly, nonatomic) BOOL hasSideCarEtag;
@property (retain, nonatomic) NSString *sideCarEtag;
@property (readonly, nonatomic) BOOL hasParentZoneEtag;
@property (retain, nonatomic) NSString *parentZoneEtag;
@property (nonatomic) BOOL hasFormatVersion;
@property (nonatomic) int formatVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithLocalStatInfo:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)etag;
- (int)StringAsFormatVersion:(id)a0;
- (id)formatVersionAsString:(int)a0;
- (BOOL)isEquivalentToSignature:(id)a0;

@end
