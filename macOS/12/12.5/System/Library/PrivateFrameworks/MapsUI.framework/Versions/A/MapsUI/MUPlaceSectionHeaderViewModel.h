@class NSString;

@interface MUPlaceSectionHeaderViewModel : NSObject

@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;
@property (readonly, nonatomic) NSString *titleString;
@property (retain, nonatomic) NSString *seeMoreButtonText;

- (void).cxx_destruct;
- (id)initWithTitleString:(id)a0 showSeeMore:(BOOL)a1;
- (id)initWithTitleString:(id)a0;
- (void)setTarget:(id)a0 selector:(SEL)a1;

@end
