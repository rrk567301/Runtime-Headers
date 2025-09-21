@class NSString, NSImage, NSAttributedString, NSObject;

@interface ContinuousReadingListPageItem : NSObject <NSCopying>

@property (readonly, nonatomic) NSObject *representedReadingListItem;
@property (readonly, nonatomic) NSString *urlString;
@property (readonly, nonatomic) NSAttributedString *title;
@property (readonly, nonatomic) NSString *itemDescription;
@property (readonly, nonatomic) NSImage *icon;
@property (readonly, nonatomic) NSImage *secondaryIcon;
@property (readonly, nonatomic) char hasDefaultSiteIcon;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;

@end
