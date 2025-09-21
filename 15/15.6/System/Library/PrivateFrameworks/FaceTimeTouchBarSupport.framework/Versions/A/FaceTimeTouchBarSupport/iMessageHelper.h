@class IDSService, NSString;

@interface iMessageHelper : NSObject

@property (retain, nonatomic) IDSService *iMessageService;
@property (retain) NSString *previousRemoteDestination;
@property char previousResult;
@property char queryInProgress;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)requestiMessageCapabilityForDestinationID:(id)a0 completionBlock:(id /* block */)a1;
- (void)sendMessage:(id)a0 forCall:(id)a1;

@end
