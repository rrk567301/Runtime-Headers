@class NSString, TSUBezierPath;

@interface KNAnimParameterSavedParameter : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) TSUBezierPath *pathValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) double maxValue;
@property (nonatomic) double minValue;
@property (nonatomic) char hasMaxValue;
@property (nonatomic) char hasMinValue;
@property (nonatomic) char removed;
@property (nonatomic) char debugOnly;
@property (copy, nonatomic) NSString *parameterDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)p_bezierPathFromSavedPathElements:(id)a0;
- (id)p_savedPathFromPath:(id)a0;

@end
