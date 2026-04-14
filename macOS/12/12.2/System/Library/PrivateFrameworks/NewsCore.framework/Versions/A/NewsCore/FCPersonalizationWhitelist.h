@class NSDictionary, NSSet, NTPBPersonalizationWhitelist;

@interface FCPersonalizationWhitelist : NSObject <NSSecureCoding, NSCopying, FCJSONEncodableObjectProviding> {
    NTPBPersonalizationWhitelist *_pbWhitelist;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *whitelist;
@property (retain, nonatomic) NSSet *portraitDisabledTagIDs;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSDictionary *defaultTags;
@property (readonly, nonatomic) NSDictionary *optionalTags;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)jsonEncodableObject;
- (id)initWithPBPersonalizationWhitelist:(id)a0;

@end
