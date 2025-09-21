@class NSString, NSUUID, NSData, NSNumber;

@interface HMSettingValue : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSNumber *numberValue;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, copy, nonatomic) NSData *dataValue;
@property (readonly, copy, nonatomic) NSUUID *selectionIdentifier;
@property (readonly, copy, nonatomic) NSString *selectionValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initDataSettingWithValue:(id)a0;
- (id)initNumberSettingWithValue:(id)a0;
- (id)initStringSettingWithValue:(id)a0;
- (id)initWithType:(long long)a0 stringValue:(id)a1 numberValue:(id)a2 dataValue:(id)a3 selectionIdentifier:(id)a4 selectionValue:(id)a5;

@end
