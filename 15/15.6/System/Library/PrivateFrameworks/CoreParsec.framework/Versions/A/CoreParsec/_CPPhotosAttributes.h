@class NSData, NSString;

@interface _CPPhotosAttributes : PBCodable <_CPPhotosAttributes, NSSecureCoding>

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
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithFacade:(id)a0;

@end
