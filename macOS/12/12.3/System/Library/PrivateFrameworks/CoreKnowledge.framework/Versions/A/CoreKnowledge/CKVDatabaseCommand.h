@class NSString, NSArray;

@interface CKVDatabaseCommand : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *commandString;
@property (readonly, nonatomic) NSArray *parameters;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqualToCommand:(id)a0;
- (id)initWithCommandString:(id)a0 parameters:(id)a1;
- (void)replaceParameters:(id)a0;
- (BOOL)updateCommandString:(id)a0;
- (BOOL)updateParameters:(id)a0;

@end
