@class NSArray, NSString, NSData, ATXTimeScheduledWidget, ATXPinnedTimeEvent;

@interface ATXTimeEventPresentation : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *icons;
@property (readonly, nonatomic) char overlapIcons;
@property (readonly, nonatomic) char hasCheckbox;
@property (readonly, nonatomic) NSData *backgroundImageData;
@property (readonly, nonatomic) NSData *logoImageData;
@property (readonly, copy, nonatomic) NSArray *fields;
@property (readonly, nonatomic) ATXTimeScheduledWidget *widget;
@property (readonly, nonatomic) char supportsRouteMap;
@property (readonly, nonatomic) ATXPinnedTimeEvent *pinnedTimeEvent;
@property (readonly, copy, nonatomic) NSString *subtitleGlyph;
@property (readonly, nonatomic) char allowsRescheduling;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCardIcon:(id)a0 fields:(id)a1 backgroundImageData:(id)a2 logoImageData:(id)a3 subtitleGlyph:(id)a4 allowsRescheduling:(char)a5;
- (id)initWithCardIcons:(id)a0 shouldOverlapIcons:(char)a1 subtitleGlyph:(id)a2 hasCheckbox:(char)a3 allowsRescheduling:(char)a4;
- (id)initWithPinnedTimeEvent:(id)a0 subtitleGlyph:(id)a1 allowsRescheduling:(char)a2;
- (id)initWithRouteMapIcons:(id)a0 subtitleGlyph:(id)a1 allowsRescheduling:(char)a2;
- (id)initWithWidget:(id)a0 allowsRescheduling:(char)a1;

@end
