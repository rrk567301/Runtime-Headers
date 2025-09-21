@class NSString;

@interface _AMSystemEventsXMLElement : SBObject <_AMSystemEventsGenericMethods>

@property (readonly, copy) NSString *name;
@property (copy) id value;

- (void)delete;
- (void)moveTo:(id)a0;
- (id)id;
- (id)XMLAttributes;
- (id)XMLElements;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(char)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
