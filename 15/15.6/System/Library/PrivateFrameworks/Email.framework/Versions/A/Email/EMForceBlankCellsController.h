@interface EMForceBlankCellsController : NSObject

@property (class, readonly, nonatomic) char shouldBlockXPCQueue;
@property (class, readonly, nonatomic) char shouldBlockSQLQueries;

+ (id)log;
+ (void)blockForRandomDurationWithMessage:(id)a0;
+ (double)_blockRate;
+ (double)_maximumDelay;
+ (double)_minimumDelay;

@end
