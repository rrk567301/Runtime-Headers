@class NSString, NSMutableArray, ISServiceProxy;

@interface ISPropertyListProvider : ISDataProvider <ISOperationDelegate> {
    char _shouldRedirectOnGotoAction;
}

@property (readonly) ISServiceProxy *serviceProxy;
@property char shouldProcessAccount;
@property char shouldProcessDialogs;
@property (readonly) char didProcessDialog;
@property char shouldProcessProtocol;
@property char shouldProcessDownloads;
@property char shouldProcessDownloadsForUpToDate;
@property (readonly) NSMutableArray *upToDateDownloadItemIDs;
@property char shouldTriggerDownloads;
@property (copy) id /* block */ actionHandler;
@property (copy) id /* block */ gotoActionHandler;
@property (retain) NSString *touchIDChallenge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithStoreClient:(id)a0;
- (char)processPropertyList:(id)a0 returningError:(id *)a1;
- (void)_processActions:(id)a0 fallback:(id)a1;
- (void)_processDownloads:(id)a0 fallback:(id)a1;
- (void)_processPingsInDictionary:(id)a0;
- (char)_processStoreVersion:(id)a0 returningError:(id *)a1;
- (void)_processTriggerDownload:(id)a0 fallback:(id)a1;
- (void)operation:(id)a0 selectedButton:(id)a1;
- (char)parseData:(id)a0 returningError:(id *)a1;
- (char)processDialogFromPropertyList:(id)a0 returningError:(id *)a1;

@end
