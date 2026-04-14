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
- (id)initWithString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToApplicationIdentifierIgnoringPrefix:(id)a0;
- (void).cxx_destruct;
- (id)UUIDRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initForBundleRecord:(id)a0;
- (BOOL)isWebApp;
- (id)description;
- (id)redactedDescription;
- (id)initWithCoder:(id)a0;

@end
