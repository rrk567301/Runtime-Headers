@class NSMutableDictionary;

@interface PLSearchThumbnailMap : NSObject {
    NSMutableDictionary *_thumbnailIdentifierByLookupIdentifier;
}

+ (id)earliestThumbnailIdentifierForLookupIdentifiers:(id)a0 thumbnailMapData:(id)a1;

- (unsigned long long)count;
- (id)initWithData:(id)a0;
- (id)description;
- (id)init;
- (id)data;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)jsonDictionary;
- (void)setOrReplaceThumbnailIdentifierIfEarlier:(id)a0 forLookupIdentifier:(id)a1;
- (id)thumbnailIdentifierForLookupIdentifier:(id)a0;

@end
