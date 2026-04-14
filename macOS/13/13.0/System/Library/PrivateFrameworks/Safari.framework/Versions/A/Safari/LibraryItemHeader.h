@interface LibraryItemHeader : LibraryItem

@property (readonly, nonatomic) long long headerType;

+ (id)headerTitleForLibraryItemHeaderType:(long long)a0;

- (id)initWithLibraryItemHeaderType:(long long)a0;
- (BOOL)isExpandable;

@end
