@class ABSearchElement, NSString, ABSmartGroup;

@interface ABEditSmartGroupCommand : ABCommand {
    ABSmartGroup *_group;
    ABSearchElement *_element;
    NSString *_name;
    BOOL _hilights;
}

- (void).cxx_destruct;
- (void)_swap;
- (BOOL)doIt;
- (void)redoIt;
- (void)undoIt;
- (id)initWithSmartGroup:(id)a0 name:(id)a1 searchElement:(id)a2 hilights:(BOOL)a3 addressBook:(id)a4;

@end
