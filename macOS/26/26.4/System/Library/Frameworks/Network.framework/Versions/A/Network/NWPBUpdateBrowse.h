@class NSString, NSMutableArray;

@interface NWPBUpdateBrowse : PBCodable <NSCopying> {
    NSString *_clientUUID;
    NSMutableArray *_discoveredEndpoints;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
