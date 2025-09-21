@class REMList;

@interface REMListSectionContext : NSObject

@property (retain, nonatomic) REMList *list;
@property (readonly, nonatomic) char hasSections;

- (void).cxx_destruct;
- (id)initWithList:(id)a0;

@end
