@class NSArray, NSString;

@interface ResumeMediaIntent : INIntent

@property (nonatomic, copy) NSArray *devices;
@property (nonatomic, copy) NSArray *deviceContext;
@property (nonatomic) long long mediaType;
@property (nonatomic, copy) NSString *targetBundleIdentifier;
@property (nonatomic, copy) NSArray *deviceQueries;
@property (nonatomic, copy) NSArray *settingAttributes;

+ (BOOL)shouldSkipDefaultSchemaCheck;

- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)initWithCoder:(id)a0;

@end
