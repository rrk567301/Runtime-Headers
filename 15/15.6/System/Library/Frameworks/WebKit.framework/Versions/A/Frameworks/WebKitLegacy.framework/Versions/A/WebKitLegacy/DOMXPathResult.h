@class NSString, DOMNode;

@interface DOMXPathResult : DOMObject

@property (readonly) unsigned short resultType;
@property (readonly) double numberValue;
@property (readonly, copy) NSString *stringValue;
@property (readonly) char booleanValue;
@property (readonly) DOMNode *singleNodeValue;
@property (readonly) char invalidIteratorState;
@property (readonly) unsigned int snapshotLength;

- (void)dealloc;
- (id)iterateNext;
- (id)snapshotItem:(unsigned int)a0;

@end
