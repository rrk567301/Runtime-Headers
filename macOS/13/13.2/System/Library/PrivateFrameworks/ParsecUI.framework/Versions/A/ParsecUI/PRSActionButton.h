@class SFPunchout, NSArray, NSString, NSImage;

@interface PRSActionButton : NSObject

@property (retain, nonatomic) NSArray *adam_ids;
@property BOOL streaming;
@property (retain, nonatomic) SFPunchout *punchout;
@property (retain, nonatomic) NSString *offer_type;
@property (retain, nonatomic) NSString *provider;
@property (retain, nonatomic) NSString *label_align;
@property (nonatomic) BOOL is_itunes;
@property (retain, nonatomic) NSString *label_itunes;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) BOOL is_overlay;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSImage *icon;
@property (retain, nonatomic) NSImage *base_icon;

- (void).cxx_destruct;
- (id)initWithActionItem:(id)a0;

@end
