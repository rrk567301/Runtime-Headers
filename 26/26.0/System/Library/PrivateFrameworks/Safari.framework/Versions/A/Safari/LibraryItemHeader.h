@class NSString;

@interface LibraryItemHeader : LibraryItem

@property (readonly, nonatomic) long long headerType;
@property (readonly, nonatomic) NSString *headerTypeString;

+ (id)headerTitleForLibraryItemHeaderType:(long long)a0;
+ (id)headerTitleForLibraryItemHeaderType:(long long)a0 profileTitle:(id)a1;

- (id)initWithLibraryItemHeaderType:(long long)a0;
- (BOOL)isExpandable;

@end
