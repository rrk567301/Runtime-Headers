@class NSArray, NSMutableArray;

@interface IMItemCollection : NSObject <NSFastEnumeration>

@property (readonly, nonatomic) NSArray *chatItems;
@property (readonly, nonatomic) NSMutableArray *extraItems;
@property (readonly, nonatomic) BOOL isReversed;

- (id)lastObject;
- (void)addItem:(id)a0;
- (id)reversed;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)firstObject;
- (void).cxx_destruct;
- (void)reverse;
- (id)lastMessageItem;
- (id)_firstObject;
- (id)_initWithChatItems:(id)a0 extraItems:(id)a1 reversed:(BOOL)a2;
- (id)_lastObject;
- (id)initWithChatItems:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
