@class NSString;

@interface DNDContactHandle : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString *_normalizedValue;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *value;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (char)matchesContactHandle:(id)a0;
- (id)normalizedValue;
- (id)_descriptionForRedacted:(char)a0;
- (id)_initWithContactIdentifier:(id)a0 type:(unsigned long long)a1 value:(id)a2;

@end
