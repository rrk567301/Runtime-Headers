@class NSString;

@interface PUPickerOtherFilter : NSObject <PUPickerFilter>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long filterType;
@property (readonly, nonatomic) char isValidFilter;
@property (readonly, nonatomic) char allowsAlbums;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)containsFilter:(id)a0;
- (id)generatedAssetPredicate;
- (unsigned long long)generatedPossibleAssetTypes;
- (unsigned long long)generatedRequiredAssetTypes;
- (id)initWithFilterType:(long long)a0;

@end
