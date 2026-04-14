@class EMTMeaningDescription, EMTGenderDescription;

@interface EMTAlternativeDescription : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long alternativeType;
@property (readonly, nonatomic) EMTGenderDescription *genderDescription;
@property (readonly, nonatomic) EMTMeaningDescription *meaningDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithGenderDescription:(id)a0;
- (id)initWithMeaningDescription:(id)a0;

@end
