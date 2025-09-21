@class NSString;

@interface IMDSpotlightQueryProvider : NSObject <IMDSpotlightQueries>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedProvider;

- (void)_validateSpotlightClientStateWithLastError:(id)a0 attempts:(long long)a1 completion:(id /* block */)a2;
- (void)fetchLastSpotlightIndexDeleteReasonWithCompletion:(id /* block */)a0;
- (void)fetchSpotlightClientStateWithCompletion:(id /* block */)a0;
- (void)invalidateSpotlightClientStateVersioningWithCompletion:(id /* block */)a0;
- (void)reindexMessagesWithCollaborationMetadata:(id)a0 collaborationMetadata:(id)a1 reason:(long long)a2 completionBlock:(id /* block */)a3;
- (void)validateSpotlightClientStateWithCompletion:(id /* block */)a0;

@end
