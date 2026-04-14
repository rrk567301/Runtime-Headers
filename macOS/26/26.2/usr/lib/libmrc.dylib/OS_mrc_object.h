@class NSString;

@interface OS_mrc_object : OS_object <OS_mrc_object>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)redactedDescription;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;

@end
