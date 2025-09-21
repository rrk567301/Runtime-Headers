@class SiriNLUOverrideProxy;
@protocol NLAsset;

@interface CDMNLv4MergeOverrideService : CDMDAGBaseService {
    id<NLAsset> _nlAsset;
}

@property (readonly, nonatomic) SiriNLUOverrideProxy *store;

+ (char)isEnabled;

- (void).cxx_destruct;
- (id)setup:(id)a0;
- (id)handle:(id)a0;
- (char)InitializeNLv4OverrideStore:(id)a0;
- (id)setupFailedFor:(id)a0;
- (id)handleRequestCommandTypeNames;
- (char)isOverrideServiceEnabled;
- (id)setupSucceeded;

@end
