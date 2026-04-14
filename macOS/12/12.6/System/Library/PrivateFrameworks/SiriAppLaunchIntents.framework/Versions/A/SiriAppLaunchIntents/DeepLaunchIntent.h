@class NSString, Application;

@interface DeepLaunchIntent : INIntent

@property (nonatomic, copy) NSString *pageName;
@property (nonatomic, retain) Application *requestedApplication;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;

@end
