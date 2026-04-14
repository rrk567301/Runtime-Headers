@interface PFScript : PFModule

+ (id)moduleName;
+ (id)packageFileTypes;

- (id)identifier;
- (id)title;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (int)capabilities;
- (id)information;
- (id)description;
- (id)name;
- (BOOL)hasAction:(id)a0;
- (id)taskForAction:(id)a0 withContextDictionary:(id)a1;
- (id)taskForExtractionWithPlan:(id)a0 toDirectory:(id)a1;

@end
