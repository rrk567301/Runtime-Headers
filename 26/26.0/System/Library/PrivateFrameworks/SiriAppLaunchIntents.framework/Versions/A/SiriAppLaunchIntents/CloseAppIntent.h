@class Application, NSArray;

@interface CloseAppIntent : INIntent

@property (nonatomic, retain) Application *application;
@property (nonatomic) long long appReference;
@property (nonatomic) long long appNoun;
@property (nonatomic, copy) NSArray *suggestedApplications;
@property (nonatomic, retain) Application *requestedApplication;

+ (BOOL)shouldSkipDefaultSchemaCheck;

- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)initWithCoder:(id)a0;

@end
