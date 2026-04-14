@class NSDictionary, NSString;

@interface VUIAction : NSObject <VUIAction>

@property (retain, nonatomic) NSDictionary *documentOptions;
@property (retain, nonatomic) VUIAction *successAction;
@property (retain, nonatomic) VUIAction *failureAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithDictionary:(id)a0 appContext:(id)a1;

- (void).cxx_destruct;
- (id)_siriConfigInfo;
- (void)_finalizeWithSuccess:(BOOL)a0 targetResponder:(id)a1 documentOptions:(id)a2 completion:(id /* block */)a3;
- (BOOL)_shouldIncludeSiriConfigInfo;
- (BOOL)isAccountRequired;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end
