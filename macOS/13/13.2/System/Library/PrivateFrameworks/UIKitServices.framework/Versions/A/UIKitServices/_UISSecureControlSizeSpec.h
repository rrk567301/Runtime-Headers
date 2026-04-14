@class _UISSecureControlCategory, UISSlotStyle, NSString;

@interface _UISSecureControlSizeSpec : NSObject <NSCopying, NSSecureCoding> {
    NSString *_localization;
    union { unsigned short all; struct { unsigned char accessibilityContrast : 1; unsigned char displayScale : 3; unsigned char layoutDirection : 1; unsigned char legibilityWeight : 1; unsigned char preferredContentSizeCategory : 4; unsigned char userInterfaceIdiom : 3; } ; } _fields;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _UISSecureControlCategory *category;
@property (readonly, nonatomic) UISSlotStyle *style;

+ (id)specWithStyle:(id)a0 tag:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEquivalentToStyle:(id)a0 tag:(id)a1;
- (id)initWithCategory:(id)a0 accessibilityContrast:(unsigned long long)a1 displayScale:(unsigned char)a2 layoutDirection:(unsigned long long)a3 legibilityWeight:(unsigned long long)a4 localization:(id)a5 preferredContentSizeCategory:(unsigned long long)a6 userInterfaceIdiom:(unsigned long long)a7;

@end
