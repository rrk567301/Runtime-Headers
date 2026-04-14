@class NPKProtoHash;

@interface NPKProtoNewLibraryHashRequest : PBRequest <NSCopying> {
    struct { unsigned char lastKnownResyncID : 1; unsigned char resyncID : 1; unsigned char syncID : 1; } _has;
}

@property (retain, nonatomic) NPKProtoHash *libraryHash;
@property (nonatomic) BOOL hasResyncID;
@property (nonatomic) unsigned int resyncID;
@property (nonatomic) BOOL hasLastKnownResyncID;
@property (nonatomic) unsigned int lastKnownResyncID;
@property (nonatomic) BOOL hasSyncID;
@property (nonatomic) unsigned int syncID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
