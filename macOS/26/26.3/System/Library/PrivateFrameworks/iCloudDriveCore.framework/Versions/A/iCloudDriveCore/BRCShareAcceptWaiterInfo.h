@class NSMutableArray;

@interface BRCShareAcceptWaiterInfo : NSObject

@property (nonatomic) BOOL skipShareAcceptationDialogs;
@property (readonly, nonatomic) NSMutableArray *waiterBlocks;

- (id)init;
- (void).cxx_destruct;

@end
