@class NSString, NSSet;

@interface BMSQLColumnAccessSet : NSObject

@property (readonly, copy, nonatomic) NSString *table;
@property (readonly, nonatomic) NSSet *columns;

+ (id)new;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (BOOL)checkTable:(id)a0 column:(id)a1;
- (id)initWithTable:(id)a0 columns:(id)a1;

@end
