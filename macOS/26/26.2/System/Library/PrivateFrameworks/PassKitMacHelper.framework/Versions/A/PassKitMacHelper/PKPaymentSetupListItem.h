@class NSString, NSImage;

@interface PKPaymentSetupListItem : NSObject <NSCopying, PKIdentifiable>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSImage *icon;
@property (nonatomic) BOOL displayInfo;
@property (nonatomic) BOOL displayChevron;
@property (nonatomic) BOOL loadingIndicatorVisible;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL useMultiSelectAccessory;
@property (nonatomic) BOOL reserverSpaceForSelectedAccessory;
@property (retain, nonatomic) NSString *badgeText;
@property (retain, nonatomic) NSString *labelText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 icon:(id)a2;

@end
