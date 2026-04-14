@class NSColor, NSString;

@interface ViewSpyInfoColorItem : ViewSpyInfoItem

@property (retain, nonatomic) NSColor *color;
@property (copy, nonatomic) NSString *colorSpaceName;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)itemType;
- (void)updateFrom:(id)a0;

@end
