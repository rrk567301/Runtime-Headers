@class _AMSystemEventsInterface, NSString, _AMSystemEventsConfiguration;

@interface _AMSystemEventsService : SBObject <_AMSystemEventsGenericMethods>

@property (readonly) BOOL active;
@property (copy) _AMSystemEventsConfiguration *currentConfiguration;
@property (readonly, copy) _AMSystemEventsInterface *interface;
@property (readonly) long long kind;
@property (copy) NSString *name;

- (id)disconnect;
- (id)connect;
- (id)configurations;
- (void)delete;
- (id)id;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)moveTo:(id)a0;
- (void)saveIn:(id)a0 as:(int)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;

@end
