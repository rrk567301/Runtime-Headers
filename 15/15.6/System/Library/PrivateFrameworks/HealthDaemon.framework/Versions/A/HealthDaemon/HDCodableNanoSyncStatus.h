@class NSString, NSMutableArray;

@interface HDCodableNanoSyncStatus : PBCodable <HDNanoSyncPersistentUserInfoCopying, HDSyncAnchorMap, HDNanoSyncDescription, NSCopying> {
    struct { unsigned char statusCode : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) char hasStatusCode;
@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSMutableArray *anchors;

+ (id)retreiveFromPersistentUserInfo:(id)a0;
+ (Class)anchorsType;
+ (id)persistentUserInfoKey;
+ (id)statusWithStatusCode:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsStatusCode:(id)a0;
- (id)statusCodeAsString:(int)a0;
- (id)anchorsAtIndex:(unsigned long long)a0;
- (void)addAnchors:(id)a0;
- (void)addToPersistentUserInfo:(id)a0;
- (unsigned long long)anchorCount;
- (long long)anchorForSyncEntityClass:(Class)a0;
- (long long)anchorForSyncEntityIdentifier:(id)a0;
- (unsigned long long)anchorsCount;
- (void)clearAnchors;
- (id)copyForPersistentUserInfo;
- (void)enumerateAnchorsAndEntityIdentifiersWithBlock:(id /* block */)a0;
- (id)nanoSyncDescription;
- (void)setAnchor:(long long)a0 forSyncEntity:(Class)a1;

@end
