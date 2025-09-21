@class DOMNode;
@protocol DOMNodeFilter;

@interface DOMNodeIterator : DOMObject

@property (readonly) DOMNode *root;
@property (readonly) unsigned int whatToShow;
@property (readonly) id<DOMNodeFilter> filter;
@property (readonly) char expandEntityReferences;
@property (readonly) DOMNode *referenceNode;
@property (readonly) char pointerBeforeReferenceNode;

- (void)dealloc;
- (void)detach;
- (id)nextNode;
- (id)previousNode;

@end
