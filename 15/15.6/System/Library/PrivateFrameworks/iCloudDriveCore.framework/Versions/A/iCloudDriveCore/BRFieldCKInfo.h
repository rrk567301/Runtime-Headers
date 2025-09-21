@class NSString, NSData;

@interface BRFieldCKInfo : PBCodable <PQLValuable, NSCopying> {
    struct { unsigned char knownToServer : 1; unsigned char wasCached : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) char hasKnownToServer;
@property (nonatomic) char knownToServer;
@property (nonatomic) char hasWasCached;
@property (nonatomic) char wasCached;
@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (readonly, nonatomic) char hasEtagBeforeCrossZoneMove;
@property (retain, nonatomic) NSString *etagBeforeCrossZoneMove;
@property (readonly, nonatomic) char hasDeletionChangeToken;
@property (retain, nonatomic) NSData *deletionChangeToken;

+ (id)newFromSqliteStatement:(struct sqlite3_stmt { } *)a0 atIndex:(int)a1;
+ (id)newFromSqliteValue:(struct sqlite3_value { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithRecord:(id)a0;
- (void)sqliteBind:(struct sqlite3_stmt { } *)a0 index:(int)a1;
- (void)clearCrossZoneMoveEtag;
- (void)markCrossZoneMoved;
- (void)overwriteEtag:(id)a0;
- (void)revertEtagsForOldZoneTombstone;
- (void)setCKInfoFieldsInRecord:(id)a0 includeCZMEtag:(char)a1;

@end
