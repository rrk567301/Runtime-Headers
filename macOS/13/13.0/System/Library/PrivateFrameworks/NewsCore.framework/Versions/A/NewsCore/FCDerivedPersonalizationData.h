@class NSString, NSDictionary;

@interface FCDerivedPersonalizationData : NSObject <FCDerivedPersonalizationData, NSSecureCoding, NSCopying> {
    NSDictionary *_aggregatesByFeatureKey;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)aggregatesForFeatureKeys:(id)a0;
- (id)aggregateForFeatureKey:(id)a0;

@end
