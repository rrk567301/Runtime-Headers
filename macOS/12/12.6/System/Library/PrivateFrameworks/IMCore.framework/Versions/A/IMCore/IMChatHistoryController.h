@class NSMutableDictionary;

@interface IMChatHistoryController : NSObject

@property (retain) NSMutableDictionary *_runningQueries;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)messageQuery:(id)a0 finishedWithResult:(id)a1 chatGUIDs:(id)a2;
- (void)messageItemQuery:(id)a0 finishedWithResult:(id)a1 chatGUIDs:(id)a2;
- (BOOL)__im_ff_chatCacheEnabled;
- (void)loadMessageWithGUID:(id)a0 completionBlock:(id /* block */)a1;
- (void)loadMessageItemWithGUID:(id)a0 completionBlock:(id /* block */)a1;

@end
