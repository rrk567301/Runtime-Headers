@class NSString, NSData, _MRContentItemMetadataProtobuf, NSMutableArray, _MRLyricsItemProtobuf;

@interface _MRContentItemProtobuf : PBCodable <NSCopying> {
    NSString *_ancestorIdentifier;
    NSData *_artworkData;
    int _artworkDataHeight;
    int _artworkDataWidth;
    NSString *_associatedParticipantIdentifier;
    NSMutableArray *_availableLanguageOptions;
    NSMutableArray *_currentLanguageOptions;
    NSString *_identifier;
    NSString *_info;
    _MRLyricsItemProtobuf *_lyrics;
    _MRContentItemMetadataProtobuf *_metadata;
    NSString *_parentIdentifier;
    NSString *_queueIdentifier;
    NSString *_requestIdentifier;
    NSMutableArray *_sections;
    struct { unsigned char artworkDataHeight : 1; unsigned char artworkDataWidth : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
