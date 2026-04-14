@class NSArray;

@interface MailUI.FeedbackViewModelHelper : NSObject {
    void /* function */ selectedMailboxes;
}

@property (nonatomic) long long selectedBucket;
@property (nonatomic, copy) NSArray *selectedMailboxes;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSelectedBucket:(long long)a0 selectedMailboxes:(id)a1;

@end
