@class NSString;

@interface AMSDoubleLinkedListNode : NSObject

@property (retain) NSString *listIdentifier;
@property (retain) AMSDoubleLinkedListNode *previous;
@property (retain) id object;
@property (retain) AMSDoubleLinkedListNode *next;

- (id)init;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;

@end
