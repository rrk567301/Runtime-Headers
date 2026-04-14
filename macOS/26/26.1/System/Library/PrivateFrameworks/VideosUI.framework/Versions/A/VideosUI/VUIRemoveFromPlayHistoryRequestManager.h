@class NSMutableDictionary;

@interface VUIRemoveFromPlayHistoryRequestManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *ongoingDeleteIDOperationDictionary;

+ (id)sharedInstance;

- (id)_init;
- (void).cxx_destruct;
- (id)init;
- (void)sendRequestForDeleteID:(id)a0 isContinueWatching:(BOOL)a1;

@end
