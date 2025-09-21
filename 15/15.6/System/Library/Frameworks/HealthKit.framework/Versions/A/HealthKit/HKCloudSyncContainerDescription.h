@class NSString, NSArray;

@interface HKCloudSyncContainerDescription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, copy, nonatomic) NSArray *databaseDescriptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContainerIdentifier:(id)a0 deviceIdentifier:(id)a1 databaseDescriptions:(id)a2;

@end
