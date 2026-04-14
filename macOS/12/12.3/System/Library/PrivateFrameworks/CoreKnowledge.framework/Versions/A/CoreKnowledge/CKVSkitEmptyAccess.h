@class NSString;

@interface CKVSkitEmptyAccess : NSObject <CKVSkitReadAccess>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prewarm;
- (id)matchSpansOfTokenChain:(id)a0 error:(id *)a1;
- (id)indexLocale;

@end
