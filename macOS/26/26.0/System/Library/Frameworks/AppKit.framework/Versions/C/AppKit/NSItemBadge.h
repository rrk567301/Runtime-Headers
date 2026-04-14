@class NSString;

@interface NSItemBadge : NSObject {
    unsigned long long _count;
}

@property (readonly, copy) NSString *stringValue;
@property (readonly, copy) NSString *text;

+ (id)badgeWithCount:(long long)a0;
+ (id)badgeWithText:(id)a0;
+ (id)indicatorBadge;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStringValue:(id)a0;
- (id)initWithCount:(unsigned long long)a0;
- (id)init;
- (void)setText:(id)a0;
- (id)initWithString:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
