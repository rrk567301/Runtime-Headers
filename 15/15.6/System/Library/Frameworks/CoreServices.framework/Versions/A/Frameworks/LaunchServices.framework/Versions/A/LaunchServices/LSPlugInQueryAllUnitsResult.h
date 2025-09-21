@class NSArray, NSUUID;

@interface LSPlugInQueryAllUnitsResult : _LSQueryResult

@property (readonly, nonatomic) NSArray *pluginUnits;
@property (readonly, nonatomic) NSUUID *dbUUID;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPlugInUnits:(id)a0 forDatabaseWithUUID:(id)a1;

@end
