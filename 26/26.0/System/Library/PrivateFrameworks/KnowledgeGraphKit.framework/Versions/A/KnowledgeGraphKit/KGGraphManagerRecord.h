@class KGGraphManager;

@interface KGGraphManagerRecord : NSObject

@property (retain, nonatomic) KGGraphManager *graphManager;
@property (nonatomic) unsigned long long useCount;

- (void).cxx_destruct;
- (id)initWithGraphManager:(id)a0;
- (BOOL)decrementUseCount;
- (void)incrementUseCount;

@end
