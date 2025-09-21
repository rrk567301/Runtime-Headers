@class NSString;

@interface NSMenuItemBadge : NSObject <NSCopying> {
    char _usesPreferredLocalization;
}

@property (nonatomic, copy) NSString *stringValue;
@property (nonatomic, readonly) char isEmpty;
@property (copy) NSString *_customStringValue;
@property (readonly) long long itemCount;
@property (readonly) long long type;
@property (readonly) NSString *stringValue;

+ (id)alertsWithCount:(long long)a0;
+ (id)newItemsWithCount:(long long)a0;
+ (id)updatesWithCount:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)initWithCount:(long long)a0;
- (void)_updateCustomStringTo:(id)a0;
- (id)initWithCount:(long long)a0 type:(long long)a1;
- (id)initWithCount:(long long)a0 type:(long long)a1 usingPreferredLocalization:(char)a2;
- (char)usesPreferredLocalization;

@end
