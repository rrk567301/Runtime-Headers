@class NSString, NSImage;

@interface PKPaymentSetupListItem : NSObject <NSCopying, PKIdentifiable>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSImage *icon;
@property (nonatomic) char displayInfo;
@property (nonatomic) char displayChevron;
@property (nonatomic) char loadingIndicatorVisible;
@property (nonatomic) char selected;
@property (nonatomic) char useMultiSelectAccessory;
@property (nonatomic) char reserverSpaceForSelectedAccessory;
@property (retain, nonatomic) NSString *badgeText;
@property (retain, nonatomic) NSString *labelText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 icon:(id)a2;

@end
