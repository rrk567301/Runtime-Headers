@class NSArray, NSDate;

@interface GEOComposedStringCondition : NSObject <NSCopying, NSSecureCoding> {
    NSDate *_expirationDate;
    NSArray *_subConditions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int conditionType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isValid;
- (id)initWithGeoCondition:(id)a0;

@end
