@class NSString, CCSQLCommandCriterion;

@interface CCDatabaseCommandBuilder : NSObject

@property (readonly, nonatomic) NSString *tableName;
@property (readonly, nonatomic) CCSQLCommandCriterion *criterion;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTableName:(id)a0;
- (void)setCommandCriterion:(id)a0;

@end
