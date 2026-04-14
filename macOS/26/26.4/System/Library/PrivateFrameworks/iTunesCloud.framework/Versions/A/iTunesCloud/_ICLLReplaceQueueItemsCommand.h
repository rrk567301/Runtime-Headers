@class NSString, _ICLLAutoPlaySource, NSMutableArray, _ICLLRadioSource;

@interface _ICLLReplaceQueueItemsCommand : PBCodable <NSCopying> {
    _ICLLAutoPlaySource *_autoPlay;
    NSMutableArray *_items;
    NSString *_preferredPlayItemId;
    NSString *_queueContext;
    _ICLLRadioSource *_radio;
    int _revision;
    int _trackGenerationSource;
    struct { unsigned char revision : 1; unsigned char trackGenerationSource : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
