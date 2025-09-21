@interface PFScript : PFModule

+ (id)moduleName;
+ (id)packageFileTypes;

- (id)identifier;
- (id)information;
- (int)capabilities;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)description;
- (id)title;
- (id)name;
- (BOOL)hasAction:(id)a0;
- (id)taskForAction:(id)a0 withContextDictionary:(id)a1;
- (id)taskForExtractionWithPlan:(id)a0 toDirectory:(id)a1;

@end
