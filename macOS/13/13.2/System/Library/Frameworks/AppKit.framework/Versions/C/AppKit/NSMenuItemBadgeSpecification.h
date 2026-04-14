@interface NSMenuItemBadgeSpecification : NSObject

@property (nonatomic) long long itemCount;
@property (nonatomic) unsigned char label;

- (id)initWithItemCount:(long long)a0 andLabel:(unsigned char)a1;

@end
