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
- (BOOL)isWebApp;
- (BOOL)isEqualToApplicationIdentifierIgnoringPrefix:(id)a0;
- (id)initForBundleRecord:(id)a0;
- (id)description;
- (id)init;
- (id)UUIDRepresentation;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithString:(id)a0;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
