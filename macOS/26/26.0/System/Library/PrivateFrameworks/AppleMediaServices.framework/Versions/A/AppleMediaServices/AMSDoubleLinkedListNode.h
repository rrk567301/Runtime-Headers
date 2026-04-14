@class NSString;

@interface AMSDoubleLinkedListNode : NSObject

@property (retain) NSString *listIdentifier;
@property (weak) AMSDoubleLinkedListNode *previous;
@property (retain) id object;
@property (retain) AMSDoubleLinkedListNode *next;

- (id)initWithObject:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
