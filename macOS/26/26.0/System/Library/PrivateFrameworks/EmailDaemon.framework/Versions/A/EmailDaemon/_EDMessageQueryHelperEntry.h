@interface _EDMessageQueryHelperEntry : NSObject <NSCopying>

@property (readonly, nonatomic) long long globalMessageID;
@property (readonly) unsigned long long sectionIndex;
@property (readonly) id primarySortValue;
@property (readonly) id secondarySortValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 sortDescriptors:(id)a1 sectionPredicates:(id)a2;

@end
