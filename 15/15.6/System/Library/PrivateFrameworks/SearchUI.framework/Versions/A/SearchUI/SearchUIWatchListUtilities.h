@interface SearchUIWatchListUtilities : NSObject

+ (void)generateWatchListReponseForWatchListIdentifier:(id)a0 type:(int)a1 completion:(id /* block */)a2;
+ (long long)wlkTypeForType:(int)a0;
+ (id)buttonForChannelDetails:(id)a0 punchoutURLs:(id)a1 tvAppDeeplinkURL:(id)a2 isEntitled:(char)a3 isContinuing:(char)a4 isContainerItem:(char)a5 hasDescriptiveSeasonTitle:(char)a6 seasonNumber:(id)a7 episodeNumber:(id)a8 isHorizontallySrollingStyle:(char)a9;
+ (id)buttonForChannelOffer:(id)a0 channel:(id)a1 episode:(id)a2;
+ (id)buttonForOffer:(id)a0 playable:(id)a1;
+ (id)buttonForPlayable:(id)a0 isHorizontallySrollingStyle:(char)a1;
+ (id)buttonWithTitle:(id)a0 subtitle:(id)a1 punchoutURL:(id)a2 type:(unsigned long long)a3 image:(id)a4 storeIdentifier:(id)a5;
+ (id)buttonsForPlayables:(id)a0 channels:(id)a1 currentEpisode:(id)a2 isUpNextable:(char)a3 watchListState:(id)a4 isHorizontallySrollingStyle:(char)a5;
+ (char)channelHasBeenSeen:(id)a0 seenChannels:(id)a1;
+ (void)computeButtonsForWatchListIdentifier:(id)a0 type:(int)a1 isHorizontallySrollingStyle:(char)a2 completion:(id /* block */)a3;
+ (void)fetchButtonsForWatchListIdentifier:(id)a0 type:(int)a1 isHorizontallySrollingStyle:(char)a2 completion:(id /* block */)a3;
+ (void)fetchButtonsForWatchListIdentifier:(id)a0 type:(int)a1 isHorizontallySrollingStyle:(char)a2 fetchButtons:(char)a3 completion:(id /* block */)a4;
+ (void)fetchWatchListStateForWatchListIdentifier:(id)a0 type:(int)a1 completion:(id /* block */)a2;
+ (void)generateMediaContainerWatchListReponseForWatchListIdentifier:(id)a0 type:(int)a1 completion:(id /* block */)a2;
+ (void)updateStatusIsInWatchList:(char)a0 watchListItemWithIdentifier:(id)a1 completion:(id /* block */)a2;
+ (int)watchListTypeForType:(int)a0 isMediaContainer:(char)a1;

@end
