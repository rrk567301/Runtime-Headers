@class NSString, NSData, NSMutableArray;

@interface NTPBAVAsset : PBCodable <NSCopying> {
    struct { unsigned char size : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasRemoteURL;
@property (retain, nonatomic) NSString *remoteURL;
@property (readonly, nonatomic) BOOL hasBookmark;
@property (retain, nonatomic) NSData *bookmark;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) unsigned long long size;
@property (retain, nonatomic) NSMutableArray *contentKeyIdentifiers;

+ (Class)contentKeyIdentifiersType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addContentKeyIdentifiers:(id)a0;
- (void)clearContentKeyIdentifiers;
- (id)contentKeyIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)contentKeyIdentifiersCount;

@end
