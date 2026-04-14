@class ODDLayoutVariablePropertySet;

@interface ODDLayoutNode : ODDLayoutObjectList {
    ODDLayoutVariablePropertySet *mVariableList;
}

- (void).cxx_destruct;
- (id)variableList;
- (id)description;
- (void)setVariableList:(id)a0;

@end
