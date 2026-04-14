@class NSDictionary, NSString;

@interface WBSStartPageSectionDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 enabled:(BOOL)a1;
- (id)sectionWithEnabled:(BOOL)a0;

@end
