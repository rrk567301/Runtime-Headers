@class Application, NSString, NSArray;

@interface DeepLaunchIntent : INIntent

@property (nonatomic, retain) Application *requestedApplication;
@property (nonatomic, copy) NSString *pageName;
@property (nonatomic, copy) NSArray *pageCanonicalNames;

+ (BOOL)shouldSkipDefaultSchemaCheck;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;

@end
