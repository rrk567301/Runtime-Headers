@class NSDate;

@interface _EDThreadScopeInfo : NSObject

@property (readonly, nonatomic) long long databaseID;
@property (nonatomic) char needsUpdate;
@property (retain, nonatomic) NSDate *lastViewedDate;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDatabaseID:(long long)a0 needsUpdate:(char)a1 lastViewedDate:(id)a2;

@end
