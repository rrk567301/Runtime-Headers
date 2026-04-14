@class NSString, NSColor;

@interface NSItemBadge : NSObject {
    unsigned long long _count;
    NSColor *_badgeBackgroundColor;
    NSColor *_badgeForegroundColor;
}

@property (readonly, copy) NSString *stringValue;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSColor *foregroundColor;
@property (readonly, copy) NSString *text;

+ (id)badgeWithCount:(long long)a0;
+ (id)badgeWithText:(id)a0;
+ (id)indicatorBadge;

- (void)setStringValue:(id)a0;
- (id)initWithString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCount:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setText:(id)a0;
- (id)badgeBackgroundColor;
- (id)badgeForegroundColor;
- (void)setBadgeBackgroundColor:(id)a0;
- (void)setBadgeForegroundColor:(id)a0;

@end
