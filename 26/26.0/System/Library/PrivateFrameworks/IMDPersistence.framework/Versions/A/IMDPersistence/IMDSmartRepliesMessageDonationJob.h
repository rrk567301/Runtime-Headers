@class NSString, NSMutableArray;

@interface IMDSmartRepliesMessageDonationJob : NSObject <IMDMessageIndexingJob>

@property (retain, nonatomic) NSMutableArray *srMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)finishWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)srMessageFromMessageDictionary:(id)a0;
- (BOOL)isMessageTimeWithinBoundsForSmartRepliesDonation:(id)a0;
- (void)processMessageDictionary:(id)a0 chatDictionary:(id)a1;
- (id)srRequestForMessage:(id)a0;

@end
