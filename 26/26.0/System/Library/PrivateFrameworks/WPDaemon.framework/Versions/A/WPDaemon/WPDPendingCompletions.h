@class NSString, NSMutableArray;

@interface WPDPendingCompletions : NSObject

@property (retain) NSMutableArray *pendingCompletions;
@property unsigned long long lastID;
@property (retain) NSString *name;

- (void)completeID:(unsigned long long)a0 success:(BOOL)a1;
- (unsigned long long)addCompletion:(id)a0;
- (id)description;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;

@end
