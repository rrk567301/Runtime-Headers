@class NSString;

@interface OS_axr_data : OS_object <OS_axr_data>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copy;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;

@end
