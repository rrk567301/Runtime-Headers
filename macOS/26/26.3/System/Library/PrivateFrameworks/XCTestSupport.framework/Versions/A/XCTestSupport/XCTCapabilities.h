@class NSDictionary;

@interface XCTCapabilities : NSObject <NSSecureCoding>

@property (class, readonly) XCTCapabilities *emptyCapabilities;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSDictionary *capabilitiesDictionary;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;

- (BOOL)hasCapability:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)versionForCapability:(id)a0;

@end
