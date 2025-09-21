@class NSString, CHDelegateController;
@protocol CHConfigurationDelegate, CHKeyValueDataSource;

@interface CHConfiguration : NSObject <CHConfiguration>

@property (readonly, nonatomic) CHDelegateController<CHConfigurationDelegate> *delegateController;
@property (readonly, nonatomic) id<CHKeyValueDataSource> dataSource;
@property (readonly, nonatomic, getter=isCloudKitEnabled) char cloudKitEnabled;
@property (readonly, nonatomic) long long keepCallsTimeIntervalType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)numberForKey:(id)a0;
- (id)initWithDataSource:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0 queue:(id)a1;

@end
