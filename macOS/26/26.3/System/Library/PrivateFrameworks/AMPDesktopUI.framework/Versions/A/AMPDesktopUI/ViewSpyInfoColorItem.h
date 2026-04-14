@class NSColor, NSString;

@interface ViewSpyInfoColorItem : ViewSpyInfoItem

@property (retain, nonatomic) NSColor *color;
@property (copy, nonatomic) NSString *colorSpaceName;

- (long long)itemType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)updateFrom:(id)a0;

@end
