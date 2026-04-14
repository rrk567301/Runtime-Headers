@class NSString, NSImage, SFPunchout;

@interface PRSBuyButton : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *offer_type;
@property (retain, nonatomic) NSString *adam_id;
@property (retain, nonatomic) NSImage *image;
@property (retain, nonatomic) NSString *image_align;
@property (retain, nonatomic) SFPunchout *punchout;
@property (nonatomic) BOOL enabled;

- (void).cxx_destruct;
- (id)initWithMediaOffer:(id)a0;

@end
