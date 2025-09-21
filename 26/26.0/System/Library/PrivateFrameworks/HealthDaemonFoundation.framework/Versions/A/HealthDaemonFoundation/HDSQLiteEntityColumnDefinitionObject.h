@class NSString;

@interface HDSQLiteEntityColumnDefinitionObject : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *columnType;
@property (readonly, nonatomic) unsigned char keyPathType;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 columnType:(id)a1 keyPathType:(unsigned char)a2;

@end
