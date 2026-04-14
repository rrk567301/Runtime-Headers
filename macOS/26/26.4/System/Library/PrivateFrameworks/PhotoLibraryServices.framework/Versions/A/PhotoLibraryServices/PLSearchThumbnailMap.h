@class NSMutableDictionary;

@interface PLSearchThumbnailMap : NSObject {
    NSMutableDictionary *_thumbnailIdentifierByLookupIdentifier;
}

+ (id)earliestThumbnailIdentifierForLookupIdentifiers:(id)a0 thumbnailMapData:(id)a1;

- (id)jsonDictionary;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)count;
- (id)data;
- (id)description;
- (id)redactedDescription;
- (void)setOrReplaceThumbnailIdentifierIfEarlier:(id)a0 forLookupIdentifier:(id)a1;
- (id)thumbnailIdentifierForLookupIdentifier:(id)a0;

@end
