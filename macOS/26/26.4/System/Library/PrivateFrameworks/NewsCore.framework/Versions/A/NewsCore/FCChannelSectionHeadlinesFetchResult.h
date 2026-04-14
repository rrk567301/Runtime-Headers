@class NSArray;
@protocol FCChannelProviding;

@interface FCChannelSectionHeadlinesFetchResult : NSObject

@property (retain, nonatomic) id<FCChannelProviding> channel;
@property (retain, nonatomic) NSArray *sectionHeadlinesGroups;

- (void).cxx_destruct;
- (id)init;
- (id)initWithChannel:(id)a0 sectionHeadlinesGroups:(id)a1;

@end
