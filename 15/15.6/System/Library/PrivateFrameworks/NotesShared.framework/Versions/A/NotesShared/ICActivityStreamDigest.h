@class ICTTTextEditFilter, NSValue, NSDate;
@protocol ICActivityEventResolving;

@interface ICActivityStreamDigest : NSObject

@property (nonatomic, readonly) ICTTTextEditFilter *objc_recentUpdatesFilter;
@property (nonatomic, readonly) char objc_hasUnseenHighlights;
@property (nonatomic, readonly) char objc_hasUnseenSummary;
@property (nonatomic, readonly) char objc_hasRecentUpdates;
@property (nonatomic, readonly) NSValue *objc_recentUpdatesRangeValue;
@property (nonatomic, readonly) char objc_isCurrentUserMentionedInRecentSummary;
@property (readonly, nonatomic) id<ICActivityEventResolving> resolverStorage;
@property (copy, nonatomic) NSDate *lastActivitySummaryViewedDate;
@property (copy, nonatomic) NSDate *recentUpdatesGenerationDate;
@property (retain, nonatomic) id recentActivityEventsStorage;
@property (readonly, nonatomic) ICTTTextEditFilter *recentUpdatesFilter;
@property (readonly, nonatomic) char hasUnseenHighlights;
@property (readonly, nonatomic) char hasUnseenSummary;
@property (readonly, nonatomic) char hasRecentUpdates;
@property (readonly, nonatomic) NSValue *recentUpdatesRangeValue;
@property (readonly, nonatomic) char isCurrentUserMentionedInRecentSummary;

- (void).cxx_destruct;
- (id)initWithResolver:(id)a0;
- (char)isCurrentUserMentionedInFilter:(id)a0;
- (char)objc_isCurrentUserMentionedInFilter:(id)a0;

@end
