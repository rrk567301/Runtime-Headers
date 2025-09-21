@class NSMutableDictionary;

@interface VUIRemoveFromPlayHistoryRequestManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *ongoingDeleteIDOperationDictionary;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)sendRequestForDeleteID:(id)a0 isContinueWatching:(char)a1;

@end
