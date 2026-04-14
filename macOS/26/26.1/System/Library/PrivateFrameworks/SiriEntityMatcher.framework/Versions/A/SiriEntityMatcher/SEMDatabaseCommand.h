@class NSString, NSArray;

@interface SEMDatabaseCommand : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *commandString;
@property (readonly, nonatomic) NSArray *parameters;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)isEqualToCommand:(id)a0;
- (BOOL)updateCommandString:(id)a0;
- (id)initWithCommandString:(id)a0 parameters:(id)a1;
- (void)replaceParameters:(id)a0;
- (BOOL)updateParameters:(id)a0;

@end
