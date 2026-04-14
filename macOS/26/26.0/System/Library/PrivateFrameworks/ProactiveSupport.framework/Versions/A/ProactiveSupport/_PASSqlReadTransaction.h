@class _PASSqliteDatabase;

@interface _PASSqlReadTransaction : NSObject

@property (readonly, nonatomic) _PASSqliteDatabase *db;

- (id)init;
- (id)initWithHandle:(id)a0;
- (void).cxx_destruct;

@end
