@class NSMutableDictionary;

@interface PLSearchThumbnailMap : NSObject {
    NSMutableDictionary *_thumbnailIdentifierByLookupIdentifier;
}

+ (id)earliestThumbnailIdentifierForLookupIdentifiers:(id)a0 thumbnailMapData:(id)a1;

- (id)jsonDictionary;
- (id)initWithData:(id)a0;
- (id)data;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)redactedDescription;
- (id)init;
- (void)setOrReplaceThumbnailIdentifierIfEarlier:(id)a0 forLookupIdentifier:(id)a1;
- (id)thumbnailIdentifierForLookupIdentifier:(id)a0;

@end
