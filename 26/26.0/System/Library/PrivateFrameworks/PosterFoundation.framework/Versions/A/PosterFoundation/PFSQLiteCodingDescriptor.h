@class NSString, NSArray, NSOrderedSet, NSSet;

@interface PFSQLiteCodingDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *tableName;
@property (readonly, nonatomic) NSArray *columns;
@property (readonly, nonatomic) NSOrderedSet *columnNames;
@property (readonly, nonatomic) NSSet *indices;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTableName:(id)a0 columns:(id)a1;
- (id)init;
- (id)columnForName:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTableName:(id)a0 columns:(id)a1 indices:(id)a2;

@end
