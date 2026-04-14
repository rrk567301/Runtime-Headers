@class NSDate;

@interface _DKSyncHistory : NSObject

@property (readonly, nonatomic) NSDate *lastSyncDate;
@property (readonly, nonatomic) unsigned long long lastDaySyncCount;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithLastSyncDate:(id)a0 lastDaySyncCount:(unsigned long long)a1;

@end
