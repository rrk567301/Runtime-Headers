@class NSString, HKCloudSyncContainerDescription, NSArray;

@interface HKCloudSyncRepositoryDescription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) HKCloudSyncContainerDescription *primaryContainerDescription;
@property (readonly, copy, nonatomic) NSArray *secondaryContainerDescriptions;
@property (readonly, copy, nonatomic) NSString *fullDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionForContainer:(id)a0;
- (id)_descriptionForDatabase:(id)a0 indentCount:(unsigned long long)a1;
- (id)_descriptionForRecord:(id)a0 indentCount:(unsigned long long)a1;
- (id)_descriptionForZone:(id)a0 indentCount:(unsigned long long)a1;
- (id)initWithIdentifier:(id)a0 primaryContainerDescription:(id)a1 secondaryContainerDescriptions:(id)a2;

@end
