@class NSArray, NSUUID;

@interface LSPlugInQueryAllUnitsResult : _LSQueryResult

@property (readonly, nonatomic) NSArray *pluginUnits;
@property (readonly, nonatomic) NSUUID *dbUUID;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithPlugInUnits:(id)a0 forDatabaseWithUUID:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
