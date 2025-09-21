@class NSString;

@interface SGMailIntelligenceDissector : SGPipelineDissector <SGMailMessageProcessing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getContactIdentifierForEmail:(id)a0 usingEntityStore:(id)a1;
+ (float)computeContactConnectionScoreFromEmailAddress:(id)a0 usingEntityStore:(id)a1;

- (void)dissectMailMessage:(id)a0 entity:(id)a1 context:(id)a2;

@end
