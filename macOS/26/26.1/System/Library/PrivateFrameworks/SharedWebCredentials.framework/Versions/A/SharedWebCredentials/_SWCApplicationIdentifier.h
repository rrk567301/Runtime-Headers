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

- (id)initForBundleRecord:(id)a0;
- (unsigned long long)hash;
- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToApplicationIdentifierIgnoringPrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)UUIDRepresentation;
- (void).cxx_destruct;
- (BOOL)isWebApp;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)redactedDescription;
- (id)init;

@end
