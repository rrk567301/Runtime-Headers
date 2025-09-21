@class NSDictionary;

@interface NSTextTab : NSObject <NSCopying, NSCoding, NSSecureCoding> {
    struct { unsigned char alignment : 4; unsigned int refCount : 24; unsigned char unused : 4; unsigned int  : 32; } _flags;
    double _location;
    id _reserved;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long alignment;
@property (readonly) double location;
@property (readonly) NSDictionary *options;

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)columnTerminatorsForLocale:(id)a0;

- (id)initWithType:(unsigned long long)a0 location:(double)a1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTextAlignment:(long long)a0 location:(double)a1 options:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)tabStopType;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
