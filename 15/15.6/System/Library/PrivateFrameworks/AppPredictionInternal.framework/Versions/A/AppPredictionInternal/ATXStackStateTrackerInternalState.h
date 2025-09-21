@class ATXBMBookmark, NSMutableDictionary, NSMutableArray;

@interface ATXStackStateTrackerInternalState : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *lastThreeUserVisitDatesOfPages;
@property (retain, nonatomic) NSMutableDictionary *stackStateByStackId;
@property (retain, nonatomic) NSMutableDictionary *cachedStackLayoutsByBlendingUpdateUUID;
@property (retain, nonatomic) NSMutableArray *blendingCacheUpdateUUIDs;
@property (retain, nonatomic) ATXBMBookmark *bookmark;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateLastThreeUserVisitDatesIfNecessaryForPage:(id)a0 date:(id)a1;

@end
