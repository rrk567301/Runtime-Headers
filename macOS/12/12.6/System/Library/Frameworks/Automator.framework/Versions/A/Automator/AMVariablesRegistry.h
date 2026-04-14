@class NSMutableDictionary, NSDictionary, NSArray;

@interface AMVariablesRegistry : NSObject

@property (class, readonly, nonatomic) AMVariablesRegistry *sharedVariablesRegistry;

@property (retain) NSMutableDictionary *_variables;
@property (retain) NSMutableDictionary *_variableDefinitionsByIdentifier;
@property (retain) NSMutableDictionary *_variablesByApplication;
@property (retain) NSMutableDictionary *_variablesByCategory;
@property (readonly, nonatomic) NSDictionary *variables;
@property (readonly, nonatomic) NSArray *variablesByCategory;
@property (readonly, nonatomic) NSArray *variablesByApplication;
@property (readonly, nonatomic) NSDictionary *variableDefinitionsByIdentifier;

+ (id)iconForVariableWithIdentifier:(id)a0;
+ (id)largeIconForVariableWithIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addVariable:(id)a0;
- (id)variableWithUUID:(id)a0;
- (id)variableWithIdentifier:(id)a0;
- (void)loadAllVariables;
- (void)loadVariablesFromDisk;
- (void)addVariablesWithPropertyLists:(id)a0;
- (void)mapVariableIdentifiersToSelectorAndNames;
- (void)calculateVariablesByCategory;
- (void)calculateVariablesByApplication;
- (void)_mapDateAndTimeVariableIdentifiers;
- (void)_mapLocationsVariableIdentifiers;
- (void)_mapSystemVariableIdentifiers;
- (void)_mapUserVariableIdentifiers;
- (void)_mapUtilitiesVariableIdentifiers;
- (id)templateVariableIdentifiers;
- (void)createTemplateVariables;
- (void)createBuiltInVariables;
- (void)loadVariablesByApplication;
- (void)_setupVariable:(id)a0;
- (void)removeVariables:(id)a0;
- (id)variableWithAllChildrenWithUUID:(id)a0;
- (id)userVariableIdentifiers;
- (id)dateAndTimeVariableIdentifiers;
- (id)locationsVariableIdentifiers;
- (id)systemVariableIdentifiers;
- (id)textAndDataVariableIdentifiers;
- (id)utilitiesVariableIdentifiers;
- (id)variableWithName:(id)a0 identifier:(id)a1 value:(id)a2;
- (void)addVariables:(id)a0;
- (void)addCustomVariableDictionary:(id)a0;
- (void)reallyRemoveVariables:(id)a0;

@end
