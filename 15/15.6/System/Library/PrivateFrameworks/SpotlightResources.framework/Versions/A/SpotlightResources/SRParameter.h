@class NSString, NSObject;

@interface SRParameter : NSObject <NSCopying>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long flag;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSObject *value;
@property (retain, nonatomic) NSString *irisName;

+ (id)boolNil;
+ (id)boolYes;
+ (id)longNil;
+ (id)boolNo;
+ (id)doubleMin;
+ (id)doubleNil;
+ (id)filePathNil;
+ (id)longZero;
+ (id)nilParameterWithType:(long long)a0;
+ (id)parameterWithBoolean:(char)a0 name:(id)a1;
+ (id)parameterWithDouble:(double)a0 name:(id)a1;
+ (id)parameterWithFilePath:(id)a0 name:(id)a1;
+ (id)parameterWithLong:(long long)a0 name:(id)a1;
+ (id)parameterWithString:(id)a0 name:(id)a1;
+ (id)stringNil;
+ (id)typeStringFromParameterType:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (void)setString:(id)a0;
- (void)setType:(long long)a0;
- (void)setNumber:(id)a0;
- (id)getStringValue;
- (void)setFlag:(long long)a0;
- (id)typeString;
- (char)isString;
- (char)isNil;
- (char)updateWithString:(id)a0;
- (char)updateWithFilePath:(id)a0;
- (id)getBooleanValue;
- (char)updateWithLong:(long long)a0;
- (void)makeNil;
- (id)getDoubleValue;
- (id)getFilePathNameValue;
- (id)getFilePathValue;
- (id)getLongValue;
- (id)initWithBoolean:(char)a0 flags:(long long)a1 name:(id)a2;
- (id)initWithDouble:(double)a0 flags:(long long)a1 name:(id)a2;
- (id)initWithFilePath:(id)a0 flags:(long long)a1 name:(id)a2;
- (id)initWithLong:(long long)a0 flags:(long long)a1 name:(id)a2;
- (id)initWithString:(id)a0 flags:(long long)a1 name:(id)a2;
- (id)initWithType:(long long)a0 flags:(long long)a1 name:(id)a2;
- (char)isBool;
- (char)isDouble;
- (char)isFilePath;
- (char)isLong;
- (char)isPositiveLong;
- (char)updateWithBoolean:(char)a0;
- (char)updateWithDouble:(double)a0;

@end
