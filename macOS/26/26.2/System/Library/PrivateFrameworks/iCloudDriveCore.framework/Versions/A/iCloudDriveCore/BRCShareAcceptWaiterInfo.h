@class NSMutableArray;

@interface BRCShareAcceptWaiterInfo : NSObject

@property (nonatomic) BOOL skipShareAcceptationDialogs;
@property (readonly, nonatomic) NSMutableArray *waiterBlocks;

- (void).cxx_destruct;
- (id)init;

@end
