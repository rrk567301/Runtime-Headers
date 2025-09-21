@class NSString, _ICLLPlaybackItemContainer, _ICLLMediaInfo;

@interface _ICLLPlaybackItem : PBCodable <NSCopying> {
    long long _contributingParticipantId;
    _ICLLPlaybackItemContainer *_container;
    NSString *_itemId;
    NSString *_mediaId;
    _ICLLMediaInfo *_mediaInfo;
    int _sectionType;
    char _isExplicit;
    struct { unsigned char contributingParticipantId : 1; unsigned char sectionType : 1; unsigned char isExplicit : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
