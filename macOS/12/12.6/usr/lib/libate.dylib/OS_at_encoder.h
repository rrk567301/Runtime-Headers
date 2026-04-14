@class NSString;

@interface OS_at_encoder : OS_object <OS_at_encoder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copy;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;

@end
