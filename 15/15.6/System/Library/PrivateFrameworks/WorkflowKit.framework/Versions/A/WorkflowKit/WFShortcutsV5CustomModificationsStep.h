@class NSString;

@interface WFShortcutsV5CustomModificationsStep : NSObject <WFProgressiveMigrationCustomModificationsStep>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)performModificationsWithContext:(id)a0 error:(id *)a1;

@end
