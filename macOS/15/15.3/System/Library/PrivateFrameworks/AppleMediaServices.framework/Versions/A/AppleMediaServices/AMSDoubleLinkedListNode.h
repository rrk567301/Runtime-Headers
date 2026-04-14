@class NSString;

@interface AMSDoubleLinkedListNode : NSObject

@property (retain) NSString *listIdentifier;
@property (weak) AMSDoubleLinkedListNode *previous;
@property (retain) id object;
@property (retain) AMSDoubleLinkedListNode *next;

- (id)init;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0;

@end
