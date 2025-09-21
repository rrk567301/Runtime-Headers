@class NSString;

@interface AMSTreatmentArea : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property char cacheable;
@property (readonly, copy) NSString *identifier;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)dictionaryRepresentation;

@end
