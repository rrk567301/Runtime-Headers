@class _MSPQueryState, MSPContainer, NSString;

@interface MSPEditableQuery : MSPQuery {
    _MSPQueryState *_editedState;
    MSPContainer *_container;
    NSString *_context;
}

- (void).cxx_destruct;
- (void)_didChangeSourceWithNewState:(id)a0 context:(id)a1 inContainer:(id)a2;
- (id)_initWithSource:(id)a0;
- (id)_visibleState;
- (void)_performEditWithStateTransformation:(id /* block */)a0 containerEdit:(id /* block */)a1;
- (void)deleteContentsObjectAtIndexes:(id)a0;
- (void)deleteContentsObjectAtIndex:(unsigned long long)a0;
- (void)moveContentsObjectAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;

@end
