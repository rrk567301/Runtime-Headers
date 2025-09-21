@class NSArray, NSDate;

@interface GEOComposedStringCondition : NSObject <NSCopying, NSSecureCoding> {
    NSDate *_expirationDate;
    NSArray *_subConditions;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) int conditionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (char)isValid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithGeoCondition:(id)a0;

@end
