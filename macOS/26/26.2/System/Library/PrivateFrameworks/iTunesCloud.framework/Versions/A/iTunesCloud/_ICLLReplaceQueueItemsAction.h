@class _ICLLQueueQuery, NSString, _ICLLAutoPlaySource, NSMutableArray, _ICLLRadioSource;

@interface _ICLLReplaceQueueItemsAction : PBCodable <NSCopying> {
    _ICLLAutoPlaySource *_autoPlay;
    NSMutableArray *_items;
    NSString *_preferredPlayItemId;
    _ICLLQueueQuery *_queueQuery;
    _ICLLRadioSource *_radio;
    int _revision;
    int _trackGenerationSource;
    struct { unsigned char revision : 1; unsigned char trackGenerationSource : 1; } _has;
}

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;

@end
