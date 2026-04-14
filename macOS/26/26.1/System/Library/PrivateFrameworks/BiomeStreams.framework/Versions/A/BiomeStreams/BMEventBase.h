@class NSArray, NSString;

@interface BMEventBase : NSObject <BMStreamValidating>

@property (class, readonly) NSArray *columns;
@property (class, readonly) NSArray *propertyDefinitions;
@property (class, readonly) NSArray *validKeyPaths;
@property (class, readonly) NSArray *protoFields;

@property (copy, nonatomic) NSArray *_validators;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)convertValue:(id)a0 toType:(long long)a1;

- (id)valueForKeyPath:(id)a0;
- (BOOL)isValidWithContext:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)json;
- (void).cxx_destruct;
- (BOOL)isCompleteWithContext:(id)a0 error:(id *)a1;
- (id)init;

@end
