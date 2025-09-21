@class NSArray, EMFocus;

@interface MUIMailboxFilterContext : NSObject

@property (readonly, copy, nonatomic) NSArray *mailboxes;
@property (readonly, nonatomic) EMFocus *focus;
@property (readonly, nonatomic) char isFilteringAvailable;

+ (id)contextWithMailboxes:(id)a0 focus:(id)a1 isFilteringAvailable:(char)a2;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMailboxes:(id)a0 focus:(id)a1 isFilteringAvailable:(char)a2;

@end
