@class NSString, NSMutableArray;

@interface NWPBUpdateBrowse : PBCodable <NSCopying> {
    NSString *_clientUUID;
    NSMutableArray *_discoveredEndpoints;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
