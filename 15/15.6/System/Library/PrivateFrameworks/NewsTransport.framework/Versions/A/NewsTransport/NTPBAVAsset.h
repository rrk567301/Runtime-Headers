@class NSString, NSData, NSMutableArray;

@interface NTPBAVAsset : PBCodable <NSCopying> {
    struct { unsigned char size : 1; } _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasRemoteURL;
@property (retain, nonatomic) NSString *remoteURL;
@property (readonly, nonatomic) char hasBookmark;
@property (retain, nonatomic) NSData *bookmark;
@property (nonatomic) char hasSize;
@property (nonatomic) unsigned long long size;
@property (retain, nonatomic) NSMutableArray *contentKeyIdentifiers;

+ (Class)contentKeyIdentifiersType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addContentKeyIdentifiers:(id)a0;
- (void)clearContentKeyIdentifiers;
- (id)contentKeyIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)contentKeyIdentifiersCount;

@end
