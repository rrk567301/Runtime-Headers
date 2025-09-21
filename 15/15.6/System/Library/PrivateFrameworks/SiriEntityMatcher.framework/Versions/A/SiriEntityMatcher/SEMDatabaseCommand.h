@class NSString, NSArray;

@interface SEMDatabaseCommand : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *commandString;
@property (readonly, nonatomic) NSArray *parameters;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEqualToCommand:(id)a0;
- (char)updateCommandString:(id)a0;
- (id)initWithCommandString:(id)a0 parameters:(id)a1;
- (void)replaceParameters:(id)a0;
- (char)updateParameters:(id)a0;

@end
