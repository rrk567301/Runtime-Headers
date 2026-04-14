@class SASharedCache, SABinary;

@interface SATaskAggregationIdentifier : NSObject <NSCopying> {
    BOOL _isTarget;
    SABinary *_binary;
    SASharedCache *_sharedCache;
    unsigned long long _rcid;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
