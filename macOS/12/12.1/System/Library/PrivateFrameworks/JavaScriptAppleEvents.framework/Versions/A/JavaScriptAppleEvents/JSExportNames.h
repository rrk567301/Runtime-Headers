@class NSMapTable;

@interface JSExportNames : NSObject

@property (retain) NSMapTable *setterSelectorTables;
@property (retain) NSMapTable *getterSelectorTables;
@property (retain) NSMapTable *methodSelectorTables;

+ (id)defaultSetterNameForPropertyName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)generatePropertySelectorTablesForClass:(Class)a0;
- (void)generateMethodSelectorTablesForClass:(Class)a0;
- (void)generatePropertySelectorTablesForProtocol:(id)a0;
- (void)generateMethodSelectorTablesForProtocol:(id)a0;
- (id)setterSelectorTableForClass:(Class)a0;
- (id)getterSelectorTableForClass:(Class)a0;
- (id)methodSelectorTableForClass:(Class)a0;
- (id)setterSelectorTableForProtocol:(id)a0;
- (SEL)methodSelectorForName:(id)a0 protocol:(id)a1;
- (id)getterSelectorTableForProtocol:(id)a0;
- (id)methodSelectorTableForProtocol:(id)a0;
- (SEL)setterSelectorForName:(id)a0 class:(Class)a1;
- (SEL)getterSelectorForName:(id)a0 class:(Class)a1;
- (SEL)methodSelectorForName:(id)a0 class:(Class)a1;
- (SEL)setterSelectorForName:(id)a0 protocol:(id)a1;
- (SEL)getterSelectorForName:(id)a0 protocol:(id)a1;

@end
