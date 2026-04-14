@class NSDictionary, NSString;

@interface NSPersistentUIEncodedReference : NSObject <NSSecureCoding, NSCopying>

@property (class, retain) NSDictionary *encodedReferenceToResponderMap;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *persistentIdentifier;
@property unsigned int windowID;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)awakeAfterUsingCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initForPersistentIdentifier:(id)a0 windowID:(unsigned int)a1;

@end
