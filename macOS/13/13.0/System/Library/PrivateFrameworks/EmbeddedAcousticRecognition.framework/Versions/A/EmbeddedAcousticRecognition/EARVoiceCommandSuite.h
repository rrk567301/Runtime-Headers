@class NSString, NSSet;

@interface EARVoiceCommandSuite : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSSet *commandSpecs;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)plistJSONDictionary;
- (id)initWithPlistJSONDictionary:(id)a0;
- (id)initWithIdentifier:(id)a0 commands:(id)a1;

@end
