@class EMMessageObjectID;

@interface _EDMessageQueryHelperEntry : NSObject <NSCopying>

@property (readonly, nonatomic) EMMessageObjectID *messageObjectID;
@property (readonly) unsigned long long sectionIndex;
@property (readonly) id primarySortValue;
@property (readonly) id secondarySortValue;
@property (readonly) long long searchResultType;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (long long)globalMessageID;
- (id)initWithMessage:(id)a0 sortDescriptors:(id)a1 sectionPredicates:(id)a2;

@end
