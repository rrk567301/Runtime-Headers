@class NSString, NSObject;

@interface SRParameter : NSObject <NSCopying>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long flag;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSObject *value;
@property (retain, nonatomic) NSString *irisName;

+ (id)boolNil;
+ (id)longNil;
+ (id)boolYes;
+ (id)boolNo;
+ (id)doubleMin;
+ (id)doubleNil;
+ (id)filePathNil;
+ (id)longZero;
+ (id)nilParameterWithType:(long long)a0;
+ (id)parameterWithBoolean:(BOOL)a0 name:(id)a1;
+ (id)parameterWithDouble:(double)a0 name:(id)a1;
+ (id)parameterWithFilePath:(id)a0 name:(id)a1;
+ (id)parameterWithLong:(long long)a0 name:(id)a1;
+ (id)parameterWithString:(id)a0 name:(id)a1;
+ (id)stringNil;
+ (id)typeStringFromParameterType:(long long)a0;

- (BOOL)isNil;
- (void)setFlag:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setName:(id)a0;
- (void)setString:(id)a0;
- (void)setType:(long long)a0;
- (id)typeString;
- (id)description;
- (BOOL)updateWithString:(id)a0;
- (void).cxx_destruct;
- (void)setNumber:(id)a0;
- (id)getStringValue;
- (BOOL)isString;
- (BOOL)updateWithFilePath:(id)a0;
- (id)getBooleanValue;
- (void)makeNil;
- (BOOL)updateWithLong:(long long)a0;
- (id)getDoubleValue;
- (id)getFilePathNameValue;
- (id)getFilePathValue;
- (id)getLongValue;
- (id)initWithBoolean:(BOOL)a0 flags:(long long)a1 name:(id)a2;
- (id)initWithDouble:(double)a0 flags:(long long)a1 name:(id)a2;
- (id)initWithFilePath:(id)a0 flags:(long long)a1 name:(id)a2;
- (id)initWithLong:(long long)a0 flags:(long long)a1 name:(id)a2;
- (id)initWithString:(id)a0 flags:(long long)a1 name:(id)a2;
- (id)initWithType:(long long)a0 flags:(long long)a1 name:(id)a2;
- (BOOL)isBool;
- (BOOL)isDouble;
- (BOOL)isFilePath;
- (BOOL)isLong;
- (BOOL)isPositiveLong;
- (BOOL)updateWithBoolean:(BOOL)a0;
- (BOOL)updateWithDouble:(double)a0;

@end
