@class NSString;

@interface WFRemindersListPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource>

@property (readonly, nonatomic) BOOL allowsAllLists;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDefinition:(id)a0;
- (id)accessoryColorForPossibleState:(id)a0;
- (id)defaultSerializedRepresentationForEnumeration:(id)a0;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (void)loadPossibleStatesForEnumeration:(id)a0 searchTerm:(id)a1 completionHandler:(id /* block */)a2;
- (Class)singleStateClass;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (void)storeDidChange;

@end
