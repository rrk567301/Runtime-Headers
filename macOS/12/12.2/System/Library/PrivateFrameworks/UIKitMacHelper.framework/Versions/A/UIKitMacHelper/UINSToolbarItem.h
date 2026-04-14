@class NSString;
@protocol UINSAccessibilityInfo;

@interface UINSToolbarItem : NSToolbarItem <UINSToolbarItem>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id<UINSAccessibilityInfo> accessibilityInfo;
@property (copy, nonatomic) NSString *label;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)menuFormRepresentation;
- (void)prepareItem;

@end
