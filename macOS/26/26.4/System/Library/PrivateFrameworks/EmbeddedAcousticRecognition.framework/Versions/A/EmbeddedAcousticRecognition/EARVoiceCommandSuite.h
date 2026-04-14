@class NSString, NSSet;

@interface EARVoiceCommandSuite : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSSet *commandSpecs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 commands:(id)a1;
- (id)initWithPlistJSONDictionary:(id)a0;
- (id)plistJSONDictionary;

@end
