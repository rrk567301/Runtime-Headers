@interface _NSControllerTreeProxy : NSTreeNode <_NSBindingTree> {
    id _controller;
}

- (unsigned long long)count;
- (id)indexPath;
- (id)parentNode;
- (id)initWithController:(id)a0;
- (id)representedObject;
- (id)_valueForKeyPath:(id)a0 ofObjectAtIndexPath:(id)a1;
- (id)objectAtIndexPath:(id)a0;
- (BOOL)_validateValue:(id *)a0 forKeyPath:(id)a1 ofObjectAtIndexPath:(id)a2 error:(id *)a3;
- (void)_setValue:(id)a0 forKeyPath:(id)a1 ofObjectAtIndexPath:(id)a2;
- (void)_invokeSelector:(SEL)a0 withArguments:(id)a1 onKeyPath:(id)a2 ofObjectAtIndexPath:(id)a3;
- (BOOL)isLeaf;
- (unsigned long long)countOfChildNodes;
- (id)descendantNodeAtIndexPath:(id)a0;
- (id)childNodes;
- (void)sortWithSortDescriptors:(id)a0 recursively:(BOOL)a1;
- (id)mutableChildNodes;
- (id)nodeAtIndexPath:(id)a0;
- (unsigned long long)countForIndexPath:(id)a0;
- (BOOL)isExpandableAtArrangedObjectIndexPath:(id)a0;
- (id)objectInChildNodesAtIndex:(unsigned long long)a0;

@end
