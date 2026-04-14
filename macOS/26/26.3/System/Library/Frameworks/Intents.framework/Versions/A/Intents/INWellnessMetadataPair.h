@class NSString, NSNumber;

@interface INWellnessMetadataPair : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *key;
@property (readonly, copy) NSNumber *numberValue;
@property (readonly, copy) NSString *stringValue;

- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithNumber:(id)a0 key:(id)a1;
- (id)initWithString:(id)a0 key:(id)a1;

@end
