@class NSNumber, CNContact, NSString, NSAttributedString, PHPerson;

@interface PXPeopleNamePickerItem : NSObject

@property (readonly, nonatomic) PHPerson *person;
@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) NSAttributedString *title;
@property (readonly, nonatomic) NSNumber *highlightRangeLocation;
@property (readonly, nonatomic) NSAttributedString *subtitle;
@property (readonly, nonatomic) NSString *identifier;

+ (id)new;
+ (id)_defaultAttributes;
+ (id)_titleForAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContact:(id)a0 searchPrefix:(id)a1;
- (id)initWithPerson:(id)a0 searchPrefix:(id)a1;

@end
