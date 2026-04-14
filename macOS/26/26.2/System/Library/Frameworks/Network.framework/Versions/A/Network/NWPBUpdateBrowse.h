@class NSString, NSMutableArray;

@interface NWPBUpdateBrowse : PBCodable <NSCopying> {
    NSString *_clientUUID;
    NSMutableArray *_discoveredEndpoints;
}

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;

@end
