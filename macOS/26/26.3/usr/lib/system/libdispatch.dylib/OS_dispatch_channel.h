@class NSString;

@interface OS_dispatch_channel : OS_dispatch_object <OS_dispatch_channel>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_xref_dispose;
- (id)init;
- (oneway void)release;

@end
