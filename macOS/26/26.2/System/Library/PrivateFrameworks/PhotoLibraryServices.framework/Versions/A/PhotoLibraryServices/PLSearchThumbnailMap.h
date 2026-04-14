@class NSMutableDictionary;

@interface PLSearchThumbnailMap : NSObject {
    NSMutableDictionary *_thumbnailIdentifierByLookupIdentifier;
}

+ (id)earliestThumbnailIdentifierForLookupIdentifiers:(id)a0 thumbnailMapData:(id)a1;

- (id)redactedDescription;
- (unsigned long long)count;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)description;
- (id)init;
- (id)data;
- (void)setOrReplaceThumbnailIdentifierIfEarlier:(id)a0 forLookupIdentifier:(id)a1;
- (id)thumbnailIdentifierForLookupIdentifier:(id)a0;

@end
