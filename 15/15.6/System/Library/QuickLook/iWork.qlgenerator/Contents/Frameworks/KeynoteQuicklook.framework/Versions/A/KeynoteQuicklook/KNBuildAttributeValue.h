@class NSString, TSUColor, TSDPathSource;
@protocol NSObject;

@interface KNBuildAttributeValue : TSCKSosBase <NSCopying> {
    int _integerValue;
    double _doubleValue;
    char _boolValue;
    NSString *_stringValue;
    TSDPathSource *_pathSourceValue;
    TSUColor *_colorValue;
    char _definedIntegerValue;
    char _definedDoubleValue;
    char _definedBoolValue;
    char _definedStringValue;
    char _definedPathSourceValue;
    char _definedColorValue;
}

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) char isEmpty;
@property (readonly, nonatomic) id<NSObject> objectValue;
@property (readonly, nonatomic) long long integerValue;
@property (readonly, nonatomic) double doubleValue;
@property (readonly, nonatomic) char boolValue;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) TSDPathSource *pathSourceValue;
@property (readonly, nonatomic) TSUColor *colorValue;

+ (id)valueWithInteger:(long long)a0;
+ (id)valueWithString:(id)a0;
+ (id)emptyValue;
+ (id)valueWithBool:(char)a0;
+ (id)valueWithDouble:(double)a0;
+ (id)valueWithColor:(id)a0;
+ (id)valueWithPathSource:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBoolValue:(char)a0;
- (id)initWithStringValue:(id)a0;
- (id)initWithIntegerValue:(long long)a0;
- (id)initWithDoubleValue:(double)a0;
- (id)initWithColorValue:(id)a0;
- (id)initWithPathSourceValue:(id)a0;
- (char)p_attributesAreEmpty;

@end
