@class NSString;

@interface PGPeopleAssetFilter : NSObject <PGAssetFilter> {
    char _petFilter;
}

@property (class, readonly, nonatomic) NSString *name;

@property (readonly, nonatomic) unsigned long long maximumNumberOfOtherFacesPresent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;

- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)asset:(id)a0 passesForPersonOrPetLocalIdentifier:(id)a1;
- (id)filteredAssetsFromAssets:(id)a0 withPersonOrPetLocalIdentifier:(id)a1;
- (id)initForPetWithMaximumNumberOfOtherFacesPresent:(unsigned long long)a0;
- (id)initWithMaximumNumberOfOtherFacesPresent:(unsigned long long)a0;

@end
