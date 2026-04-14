@class NSString;

@interface IASDataStoreSchemaColumn : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long columnDataType;
@property (readonly, nonatomic) unsigned long long columnType;
@property (readonly, nonatomic) unsigned long long retentionPeriod;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0 columnDataType:(unsigned long long)a1 columnType:(unsigned long long)a2 retentionPeriod:(unsigned long long)a3;

@end
