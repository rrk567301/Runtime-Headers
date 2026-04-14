@class HDProfile;

@interface HDSyncRequester : NSObject

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (copy, nonatomic) id /* block */ unitTesting_willRequestSyncsHandler;

- (void).cxx_destruct;
- (id)init;
- (id)initWithProfile:(id)a0;
- (void)requestSyncsWithReason:(id)a0 options:(unsigned long long)a1;
- (void)requestSyncsWithReason:(id)a0;

@end
