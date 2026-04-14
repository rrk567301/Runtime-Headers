@interface NSSearchFieldBezelConfiguration : NSTextFieldBezelConfiguration

@property (nonatomic) BOOL hasMenu;
@property (nonatomic) BOOL hasSearchButton;
@property (nonatomic) BOOL hasCancelButton;
@property (nonatomic) BOOL cancelButtonVisible;

+ (id)neutralConfiguration;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
