@class NSMutableDictionary;

@interface PLSearchThumbnailMap : NSObject {
    NSMutableDictionary *_thumbnailIdentifierByLookupIdentifier;
}

+ (id)earliestThumbnailIdentifierForLookupIdentifiers:(id)a0 thumbnailMapData:(id)a1;

- (id)jsonDictionary;
- (id)initWithData:(id)a0;
- (unsigned long long)count;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)data;
- (id)redactedDescription;
- (void)setOrReplaceThumbnailIdentifierIfEarlier:(id)a0 forLookupIdentifier:(id)a1;
- (id)thumbnailIdentifierForLookupIdentifier:(id)a0;

@end
