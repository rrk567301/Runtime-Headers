@class LanguageOption, NSArray, Device;

@interface SetAudioLanguageIntent : INIntent

@property (nonatomic, retain) Device *device;
@property (nonatomic, retain) LanguageOption *language;
@property (nonatomic, copy) NSArray *deviceContext;
@property (nonatomic, copy) NSArray *deviceQueries;

+ (BOOL)shouldSkipDefaultSchemaCheck;

- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
