@class NSString, NSData, PBUnknownFields;

@interface MSPCollectionStorage : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
}

@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) char hasImage;
@property (retain, nonatomic) NSData *image;
@property (readonly, nonatomic) char hasImageURL;
@property (retain, nonatomic) NSString *imageURL;
@property (readonly, nonatomic) char hasCollectionDescription;
@property (retain, nonatomic) NSString *collectionDescription;
@property (readonly, nonatomic) char hasItemData;
@property (retain, nonatomic) NSData *itemData;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
