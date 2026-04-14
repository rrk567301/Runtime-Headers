@class SASharedCache, SABinary;

@interface SATaskAggregationIdentifier : NSObject <NSCopying> {
    BOOL _isTarget;
    SABinary *_binary;
    SASharedCache *_sharedCache;
    unsigned long long _rcid;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
