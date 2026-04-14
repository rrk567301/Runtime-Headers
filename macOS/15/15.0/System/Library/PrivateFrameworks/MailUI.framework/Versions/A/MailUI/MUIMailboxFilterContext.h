@class NSArray, EMFocus;

@interface MUIMailboxFilterContext : NSObject

@property (readonly, copy, nonatomic) NSArray *mailboxes;
@property (readonly, nonatomic) EMFocus *focus;

+ (id)contextWithMailboxes:(id)a0 focus:(id)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMailboxes:(id)a0 focus:(id)a1;

@end
