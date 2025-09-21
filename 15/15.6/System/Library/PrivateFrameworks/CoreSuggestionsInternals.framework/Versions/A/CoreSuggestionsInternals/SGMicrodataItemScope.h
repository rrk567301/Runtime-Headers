@class NSMutableArray;

@interface SGMicrodataItemScope : NSObject

@property (readonly, nonatomic) NSMutableArray *itemProps;

- (id)init;
- (void).cxx_destruct;
- (char)isReferencedBy:(id)a0;
- (void)addItemProp:(id)a0;

@end
