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

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
