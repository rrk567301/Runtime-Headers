@class _ICLLQueue, _ICLLPlaybackControlSettings, NSString;

@interface _ICLLQueueQuery : PBCodable <NSCopying> {
    _ICLLPlaybackControlSettings *_controlSettings;
    _ICLLQueue *_queue;
    NSString *_queueContext;
    int _revision;
    struct { unsigned char revision : 1; } _has;
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
