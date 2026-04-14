@class NSString;

@interface SearchUISupplementaryIdentifiers : NSObject

@property (class, nonatomic, readonly) NSString *sectionHeaderKind;
@property (class, nonatomic, readonly) NSString *sectionTopSeparatorKind;
@property (class, nonatomic, readonly) NSString *sectionBottomSeparatorKind;
@property (class, nonatomic, readonly) NSString *itemSeparatorKind;
@property (class, nonatomic, readonly) NSString *leadingScrollButtonKind;
@property (class, nonatomic, readonly) NSString *trailingScrollButtonKind;

- (id)init;
- (void).cxx_destruct;

@end
