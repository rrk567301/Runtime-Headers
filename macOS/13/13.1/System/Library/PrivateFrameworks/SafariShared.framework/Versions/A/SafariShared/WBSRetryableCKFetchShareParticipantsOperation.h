@class NSArray;

@interface WBSRetryableCKFetchShareParticipantsOperation : WBSRetryableCKOperation

@property (copy, nonatomic) NSArray *userIdentityLookupInfos;
@property (copy, nonatomic) id /* block */ perShareParticipantCompletionBlock;
@property (copy, nonatomic) id /* block */ fetchShareParticipantsCompletionBlock;

- (void).cxx_destruct;
- (void)_setUpOperation:(id)a0;
- (id)_makeOperation;

@end
