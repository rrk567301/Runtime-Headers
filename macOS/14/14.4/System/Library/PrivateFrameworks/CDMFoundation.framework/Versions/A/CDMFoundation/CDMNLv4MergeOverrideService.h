@class SiriNLUOverrideProxy;

@interface CDMNLv4MergeOverrideService : CDMDAGBaseService

@property (readonly, nonatomic) SiriNLUOverrideProxy *store;

+ (BOOL)isEnabled;

- (void).cxx_destruct;
- (id)setup:(id)a0;
- (id)handle:(id)a0;
- (BOOL)InitializeNLv4OverrideStore:(id)a0;
- (id)setupFailedFor:(id)a0;
- (id)handleRequestCommandTypeNames;
- (BOOL)isOverrideServiceEnabled;
- (id)setupSucceeded;

@end
