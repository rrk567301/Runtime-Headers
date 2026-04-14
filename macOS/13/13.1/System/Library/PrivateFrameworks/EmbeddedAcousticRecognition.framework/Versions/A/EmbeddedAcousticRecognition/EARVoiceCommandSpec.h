@class NSString, NSSet;

@interface EARVoiceCommandSpec : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char valence;
@property (readonly, copy, nonatomic) NSSet *fstRelativePaths;
@property (readonly, nonatomic) NSString *fstSymbol;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)plistJSONDictionary;
- (id)initWithPlistJSONDictionary:(id)a0;
- (id)initWithIdentifier:(id)a0 valence:(char)a1 fstRelativePaths:(id)a2 fstSymbol:(id)a3;

@end
