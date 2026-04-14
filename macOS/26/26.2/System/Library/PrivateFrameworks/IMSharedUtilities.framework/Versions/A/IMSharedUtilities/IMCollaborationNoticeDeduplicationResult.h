@class NSArray;

@interface IMCollaborationNoticeDeduplicationResult : NSObject

@property (readonly, nonatomic) NSArray *deduplicatedNotices;
@property (readonly, nonatomic) NSArray *duplicateNotices;

+ (id)resultWithDeduplicated:(id)a0 duplicates:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDeduplicated:(id)a0 duplicates:(id)a1;

@end
