@class NSArray;

@interface WFWorkflowFolderPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

- (void).cxx_destruct;
- (id)possibleStates;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)defaultSerializedRepresentation;
- (id)accessoryImageForPossibleState:(id)a0;
- (id)accessoryIconForPossibleState:(id)a0;

@end
