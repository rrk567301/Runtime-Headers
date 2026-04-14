@class NSUUID, NSString, NSData, NSDictionary;

@interface _SFLItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSUUID *identifier;
@property (copy) NSString *name;
@property (copy) NSData *bookmark;
@property (copy) NSDictionary *properties;
@property unsigned long long seed;

+ (id)supportedPropertyClasses;

- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)initWithInternalItem:(id)a0;
- (id)objectForPropertyKey:(id)a0;
- (void)setPropertyObject:(id)a0 forKey:(id)a1;
- (void)setPropertyObjectsForKeysWithDictionary:(id)a0;

@end
