@class REMList;

@interface REMListAutoCategorizeContext : NSObject

@property (retain, nonatomic) REMList *list;
@property (readonly, nonatomic) BOOL shouldAutoCategorizeItems;

- (id)initWithList:(id)a0;
- (void).cxx_destruct;

@end
