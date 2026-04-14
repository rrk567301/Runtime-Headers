@class REMList;

@interface REMListAutoCategorizeContext : NSObject

@property (retain, nonatomic) REMList *list;
@property (readonly, nonatomic) BOOL shouldAutoCategorizeItems;

- (void).cxx_destruct;
- (id)initWithList:(id)a0;

@end
