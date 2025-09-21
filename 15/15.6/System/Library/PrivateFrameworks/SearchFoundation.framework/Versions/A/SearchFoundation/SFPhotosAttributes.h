@class NSDictionary, NSData, NSString;

@interface SFPhotosAttributes : NSObject <SFPhotosAttributes, NSSecureCoding, NSCopying> {
    struct { unsigned char positionIndex : 1; unsigned char isEmbeddingMatched : 1; unsigned char isMetadataMatched : 1; unsigned char isVideo : 1; unsigned char isFavorite : 1; unsigned char photosSuggestionType : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long positionIndex;
@property (nonatomic) char isEmbeddingMatched;
@property (nonatomic) char isMetadataMatched;
@property (nonatomic) char isVideo;
@property (nonatomic) char isFavorite;
@property (nonatomic) int photosSuggestionType;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)hasIsFavorite;
- (id)initWithProtobuf:(id)a0;
- (char)hasIsVideo;
- (char)hasIsEmbeddingMatched;
- (char)hasIsMetadataMatched;
- (char)hasPhotosSuggestionType;
- (char)hasPositionIndex;

@end
