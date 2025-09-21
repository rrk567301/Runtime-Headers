@class NSString, _INPBConfidenceScore;

@interface _INPBValueMetadata : PBCodable <_INPBValueMetadata, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _requiredEntitlements;
    struct { unsigned char confirmed : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *canonicalValue;
@property (readonly, nonatomic) char hasCanonicalValue;
@property (retain, nonatomic) _INPBConfidenceScore *confidenceScore;
@property (readonly, nonatomic) char hasConfidenceScore;
@property (nonatomic) char confirmed;
@property (nonatomic) char hasConfirmed;
@property (copy, nonatomic) NSString *input;
@property (readonly, nonatomic) char hasInput;
@property (readonly, nonatomic) int *requiredEntitlements;
@property (readonly, nonatomic) unsigned long long requiredEntitlementsCount;
@property (copy, nonatomic) NSString *source;
@property (readonly, nonatomic) char hasSource;
@property (copy, nonatomic) NSString *sourceAppBundleIdentifier;
@property (readonly, nonatomic) char hasSourceAppBundleIdentifier;
@property (copy, nonatomic) NSString *uuid;
@property (readonly, nonatomic) char hasUuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addRequiredEntitlement:(int)a0;
- (int)StringAsRequiredEntitlements:(id)a0;
- (void)clearRequiredEntitlements;
- (int)requiredEntitlementAtIndex:(unsigned long long)a0;
- (id)requiredEntitlementsAsString:(int)a0;
- (void)setRequiredEntitlements:(int *)a0 count:(unsigned long long)a1;

@end
