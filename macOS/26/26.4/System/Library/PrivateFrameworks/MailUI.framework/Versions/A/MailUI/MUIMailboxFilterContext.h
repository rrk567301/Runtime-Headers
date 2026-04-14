@class NSArray, EMFocus;

@interface MUIMailboxFilterContext : NSObject

@property (readonly, copy, nonatomic) NSArray *mailboxes;
@property (readonly, nonatomic) EMFocus *focus;
@property (readonly, nonatomic) BOOL isFilteringAvailable;

+ (id)contextWithMailboxes:(id)a0 focus:(id)a1 isFilteringAvailable:(BOOL)a2;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithMailboxes:(id)a0 focus:(id)a1 isFilteringAvailable:(BOOL)a2;

@end
