@interface TLKFormattedTextItem : TLKObject

@property (nonatomic) char isBold;
@property (nonatomic) char isEmphasized;
@property (nonatomic) long long color;

- (char)hasContent;
- (unsigned long long)_itemType;

@end
