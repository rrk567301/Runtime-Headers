@class NSDictionary, NSString;

@interface WBSStartPageSectionDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isEnabled) char enabled;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithIdentifier:(id)a0 enabled:(char)a1;
- (id)sectionWithEnabled:(char)a0;

@end
