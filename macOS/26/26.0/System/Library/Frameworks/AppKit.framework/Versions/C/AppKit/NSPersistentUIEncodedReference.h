@class NSDictionary, NSString;

@interface NSPersistentUIEncodedReference : NSObject <NSSecureCoding, NSCopying>

@property (class, retain) NSDictionary *encodedReferenceToResponderMap;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *persistentIdentifier;
@property unsigned int windowID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)awakeAfterUsingCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initForPersistentIdentifier:(id)a0 windowID:(unsigned int)a1;

@end
