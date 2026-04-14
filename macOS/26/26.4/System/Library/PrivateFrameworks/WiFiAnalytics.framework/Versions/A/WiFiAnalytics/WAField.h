@class NSString, NSData, NSMutableArray, WAMessageAWD;

@interface WAField : NSObject <NSCopying, NSSecureCoding> {
    id _value;
    NSString *_typeInfoForRepeatableSubmessage;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (nonatomic) BOOL isRepeatable;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSMutableArray *repeatableValues;
@property (nonatomic) double doubleValue;
@property (nonatomic) float floatValue;
@property (nonatomic) int int32Value;
@property (nonatomic) long long int64Value;
@property (nonatomic) unsigned int uint32Value;
@property (nonatomic) unsigned long long uint64Value;
@property (nonatomic) BOOL boolValue;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSData *bytesValue;
@property (retain, nonatomic) WAMessageAWD *subMessageValue;

- (long long)int64Value;
- (id)subMessageValue;
- (void)setStringValue:(id)a0;
- (void)setTypeInformationForRepeatableSubmessage:(id)a0;
- (id)stringValue;
- (unsigned int)uint32Value;
- (void)setDoubleValue:(double)a0;
- (unsigned long long)uint64Value;
- (id)bytesValue;
- (void)_addRepeatableValue:(id)a0;
- (BOOL)isNumerical;
- (double)doubleValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)int32Value;
- (void)setBoolValue:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (void)addRepeatableFloatValue:(float)a0;
- (void)_throwIncorrecTypeExceptionForType:(long long)a0 isGet:(BOOL)a1;
- (BOOL)boolValue;
- (id)repeatableValues;
- (id)initWithType:(long long)a0 isRepeatable:(BOOL)a1 andKey:(id)a2 andTypeInfoForRepeatableSubmessage:(id)a3;
- (void)setBytesValue:(id)a0;
- (float)floatValue;
- (id)_typeAsString:(long long)a0;
- (void).cxx_destruct;
- (void)addRepeatableUInt32Value:(unsigned int)a0;
- (void)addRepeatableInt64Value:(long long)a0;
- (id)typeInformationForRepeatableSubmessage;
- (void)addRepeatableString:(id)a0;
- (void)_throwIncorrectRepeatableStateExceptionAsFieldShouldBeRepeatable:(BOOL)a0 isGet:(BOOL)a1 forType:(long long)a2;
- (id)init;
- (void)addRepeatableSubMessageValue:(id)a0;
- (void)setSubMessageValue:(id)a0;
- (void)setUint32Value:(unsigned int)a0;
- (void)setInt32Value:(int)a0;
- (id)description;
- (void)addRepeatableBytes:(id)a0;
- (void)setInt64Value:(long long)a0;
- (void)addRepeatableDoubleValue:(double)a0;
- (id)initWithCoder:(id)a0;
- (void)setUint64Value:(unsigned long long)a0;
- (id)initWithType:(long long)a0 isRepeatable:(BOOL)a1 key:(id)a2 repeatableValues:(id)a3 doubleValue:(double)a4 floatValue:(float)a5 int32Value:(int)a6 int64Value:(long long)a7 uint32Val:(unsigned int)a8 uint64Value:(unsigned long long)a9 boolValue:(BOOL)a10 stringValue:(id)a11 bytesValue:(id)a12 subMessageValue:(id)a13 andTypeInfoForRepeatableSubmessage:(id)a14;
- (void)addRepeatableBoolValue:(BOOL)a0;
- (void)addRepeatableUInt64Value:(unsigned long long)a0;
- (void)addRepeatableInt32Value:(int)a0;
- (void)setRepeatableValues:(id)a0;
- (void)setFloatValue:(float)a0;
- (id)_ownTypeAsString;

@end
