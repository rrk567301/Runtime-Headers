@class NSSet;

@interface PPTopicMetadata : NSObject <NSCopying, NSSecureCoding, MLFeatureProvider>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned short impressionCount;
@property (readonly, nonatomic) unsigned short occurrencesInSource;
@property (readonly, nonatomic) unsigned short algorithmResultPosition;
@property (readonly, nonatomic) unsigned short algorithmResultCount;
@property (readonly, nonatomic) char exactMatchInSourceText;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)featureValueForName:(id)a0;
- (id)initWithImpressionCount:(unsigned short)a0 occurrencesInSource:(unsigned short)a1 algorithmResultPosition:(unsigned short)a2 algorithmResultCount:(unsigned short)a3 exactMatchInSourceText:(char)a4;
- (char)isEqualToTopicMetadata:(id)a0;

@end
