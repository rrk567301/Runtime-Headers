@class FCCloudContext;
@protocol FCFeedPersonalizing;

@interface FCFeedManager : NSObject

@property (retain, nonatomic) FCCloudContext *context;
@property (retain, nonatomic) id<FCFeedPersonalizing> feedPersonalizer;

+ (id)_identifierForFeedName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)feedDescriptorForReadingHistory;
- (id)_feedDescriptorWithIdentifier:(id)a0 tag:(id)a1 feedConfiguration:(unsigned long long)a2;
- (id)feedDescriptorForReadingList;
- (id)feedDescriptorForTag:(id)a0 feedConfiguration:(unsigned long long)a1;
- (id)feedDescriptorWithIdentifier:(id)a0;
- (id)initWithCloudContext:(id)a0;

@end
