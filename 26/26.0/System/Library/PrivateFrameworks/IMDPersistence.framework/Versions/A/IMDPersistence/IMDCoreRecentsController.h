@class NSString;

@interface IMDCoreRecentsController : NSObject <IMDIndexingIntegration>

@property (readonly, nonatomic) BOOL isIntegrationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (id)_dataDetectedMessageGUIDsFromGUIDs:(id)a0;
- (void)_performClientRequest:(id /* block */)a0;
- (id)createRecentFromMessageDictionary:(id)a0 participantHandleID:(id)a1;
- (id)createRecentsFromVCFWithPath:(id)a0 messageGUID:(id)a1 senderID:(id)a2 messageDate:(id)a3 outAddress:(id *)a4;
- (void)deleteMessageGUIDs:(id)a0 reason:(long long)a1 completionHandler:(id /* block */)a2;
- (void)deleteRecentsForMessageGUIDs:(id)a0 completionBlock:(id /* block */)a1;
- (void)deleteRecentsWithHandleIDs:(id)a0;

@end
