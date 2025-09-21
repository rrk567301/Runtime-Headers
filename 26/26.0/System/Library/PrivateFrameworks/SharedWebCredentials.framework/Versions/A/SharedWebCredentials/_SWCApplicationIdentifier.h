@class NSString;

@interface _SWCApplicationIdentifier : NSObject <SWCRedactedDescription, NSCopying, NSSecureCoding> {
    unsigned long long _hash;
}

@property (class, readonly, getter=isCaseSensitive) BOOL caseSensitive;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *rawValue;
@property (readonly) NSString *prefix;
@property (readonly) NSString *bundleIdentifier;
@property (readonly, getter=isValid) BOOL valid;

+ (id)new;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithString:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)UUIDRepresentation;
- (id)initForBundleRecord:(id)a0;
- (BOOL)isEqualToApplicationIdentifierIgnoringPrefix:(id)a0;
- (unsigned long long)hash;
- (BOOL)isWebApp;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;

@end
