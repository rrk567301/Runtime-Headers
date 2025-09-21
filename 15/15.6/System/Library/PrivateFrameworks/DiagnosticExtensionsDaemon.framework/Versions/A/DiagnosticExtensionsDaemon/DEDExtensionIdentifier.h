@class NSString;

@interface DEDExtensionIdentifier : NSObject <DEDSecureArchiving, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSString *extensionIdentifier;
@property long long invocationNumber;
@property (readonly) NSString *stringValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (id)archivedClasses;
+ (id)parseDEDIdentifierString:(id)a0;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExtensionIdentifier:(id)a0 invocationNumber:(long long)a1;

@end
