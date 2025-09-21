@class NSArray, NSMutableDictionary, NSMutableArray;

@interface ATXUpcomingMediaContainer : NSObject {
    NSMutableArray *_maybeSortedUpcomingMedia;
    char _sorted;
}

@property (readonly, nonatomic) NSMutableDictionary *itemExpiredUpcomingMedia;
@property (readonly, nonatomic) NSMutableDictionary *itemValidUpcomingMedia;
@property (readonly, nonatomic) NSMutableDictionary *containerExpiredUpcomingMedia;
@property (readonly, nonatomic) NSMutableDictionary *containerValidUpcomingMedia;
@property (readonly, nonatomic) NSMutableDictionary *bucketExpiredUpcomingMedia;
@property (readonly, nonatomic) NSMutableDictionary *bucketValidUpcomingMedia;
@property (readonly, nonatomic) NSArray *sortedUpcomingMedia;
@property (nonatomic) char preferUpcomingMediaForPredictions;
@property (nonatomic) char preferenceForUpcomingMediaIsSet;
@property (nonatomic) char isInternalApplication;

+ (void)addToDictionary:(id)a0 key:(id)a1 value:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)addUpcomingMediaIntent:(id)a0 withRank:(id)a1;
- (char)appSupportsUpcomingMedia;
- (id)sortedUpcomingMedia;

@end
