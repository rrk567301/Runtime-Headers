@class NSString, _INPBLocation;

@interface _INPBSearchForPhotosIntentResponse : PBCodable <_INPBSearchForPhotosIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char searchResultsCount : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *albumName;
@property (readonly, nonatomic) char hasAlbumName;
@property (retain, nonatomic) _INPBLocation *locationCreated;
@property (readonly, nonatomic) char hasLocationCreated;
@property (nonatomic) int searchResultsCount;
@property (nonatomic) char hasSearchResultsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
