@class NSData, NSString;

@interface _SFPBPhotosAttributes : PBCodable <_SFPBPhotosAttributes, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long positionIndex;
@property (nonatomic) char isEmbeddingMatched;
@property (nonatomic) char isMetadataMatched;
@property (nonatomic) char isVideo;
@property (nonatomic) char isFavorite;
@property (nonatomic) int photosSuggestionType;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithFacade:(id)a0;

@end
