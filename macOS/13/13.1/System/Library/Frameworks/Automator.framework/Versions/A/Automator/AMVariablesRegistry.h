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
- (void)loadVariablesFromDisk;
- (id)variableWithName:(id)a0 identifier:(id)a1 value:(id)a2;
- (void)mapVariableIdentifiersToSelectorAndNames;
- (id)userVariableIdentifiers;
- (void)_mapUserVariableIdentifiers;
- (id)dateAndTimeVariableIdentifiers;
- (void)_mapDateAndTimeVariableIdentifiers;
- (id)locationsVariableIdentifiers;
- (void)_mapLocationsVariableIdentifiers;
- (id)systemVariableIdentifiers;
- (void)_mapSystemVariableIdentifiers;
- (id)textAndDataVariableIdentifiers;
- (id)utilitiesVariableIdentifiers;
- (void)_mapUtilitiesVariableIdentifiers;
- (id)templateVariableIdentifiers;
- (void)createBuiltInVariables;
- (void)createTemplateVariables;
- (void)loadAllVariables;
- (void)loadVariablesByApplication;
- (void)addVariables:(id)a0;
- (void)_setupVariable:(id)a0;
- (void)addVariablesWithPropertyLists:(id)a0;
- (void)addCustomVariableDictionary:(id)a0;
- (void)removeVariables:(id)a0;
- (void)reallyRemoveVariables:(id)a0;
- (id)variableWithAllChildrenWithUUID:(id)a0;
- (id)variableWithIdentifier:(id)a0;
- (void)calculateVariablesByCategory;
- (void)calculateVariablesByApplication;

@end
