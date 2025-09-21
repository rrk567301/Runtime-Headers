@class NSString;

@interface _AMSystemEventsXMLData : SBObject <_AMSystemEventsGenericMethods>

@property (copy) NSString *name;
@property (copy) NSString *text;

- (id)id;
- (void)moveTo:(id)a0;
- (void)delete;
- (id)XMLElements;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
