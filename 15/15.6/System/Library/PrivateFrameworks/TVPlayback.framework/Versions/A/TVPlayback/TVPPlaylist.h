@class NSArray, NSDictionary, NSString, NSMutableArray, NSObject;
@protocol TVPMediaItem;

@interface TVPPlaylist : NSObject {
    NSMutableArray *_shuffledItems;
    NSArray *_upcomingItems;
}

@property (retain, nonatomic) NSObject<TVPMediaItem> *currentMediaItem;
@property (retain, nonatomic) NSObject<TVPMediaItem> *nextMediaItem;
@property (retain, nonatomic) NSObject<TVPMediaItem> *previousMediaItem;
@property (retain, nonatomic) NSDictionary *changeContext;
@property (nonatomic) unsigned long long currentIndex;
@property (nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long upNextIndex;
@property (readonly, nonatomic) NSMutableArray *trackList;
@property (readonly, nonatomic) NSArray *activeList;
@property (readonly, nonatomic) unsigned long long activeListIndex;
@property (nonatomic) long long endAction;
@property (nonatomic) char windowed;
@property (nonatomic) unsigned long long numConsecutivePlaybackFailures;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) char shuffleEnabled;
@property (readonly, nonatomic) char supportsShuffle;
@property (nonatomic) long long repeatMode;
@property (readonly, nonatomic) char supportsRepeat;
@property (nonatomic) char skipExplicit;
@property (readonly, nonatomic) NSArray *upcomingItems;
@property (nonatomic) unsigned long long upcomingItemsLimit;

+ (char)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addItem:(id)a0;
- (void)addItems:(id)a0;
- (void)insertItem:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeItemAtIndex:(unsigned long long)a0;
- (void)removeItemsAtIndexes:(id)a0;
- (void)insertItems:(id)a0 atIndexes:(id)a1;
- (char)_isMediaItemExplicit:(id)a0;
- (unsigned long long)_nextActiveListIndex;
- (unsigned long long)_previousActiveListIndex;
- (void)_shuffle:(char)a0;
- (void)_updateCurrent:(char)a0 andNextItems:(char)a1 withContext:(id)a2;
- (void)addItemsToUpNext:(id)a0;
- (void)changeMedia:(long long)a0;
- (void)changeMedia:(long long)a0 withContext:(id)a1;
- (char)changeToActiveListIndex:(unsigned long long)a0 withContext:(id)a1;
- (id)initWithMediaItems:(id)a0 index:(long long)a1 isCollection:(char)a2;
- (char)isEqualToPlaylist:(id)a0;
- (char)moreItemsAvailable:(long long)a0;
- (void)setShuffleEnabled:(char)a0 preserveCurrentItem:(char)a1;

@end
