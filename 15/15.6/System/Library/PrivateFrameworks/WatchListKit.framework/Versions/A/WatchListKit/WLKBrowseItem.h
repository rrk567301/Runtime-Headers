@class WLKComingSoonInfo, WLKBasicContentMetadata, NSArray;

@interface WLKBrowseItem : NSObject

@property (retain, nonatomic) WLKComingSoonInfo *contentComingSoonInfo;
@property (readonly, nonatomic) WLKBasicContentMetadata *content;
@property (readonly, nonatomic) WLKBrowseItem *currentEpisode;
@property (readonly, nonatomic) NSArray *playables;
@property (readonly, nonatomic, getter=isWatchlisted) char watchlisted;
@property (readonly, nonatomic, getter=isWatchlistable) char watchlistable;

+ (id)browseItemsWithDictionaries:(id)a0 context:(id)a1;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 context:(id)a1;
- (id)preferredComingSoonInfo;

@end
