@class NSSet, NSString;

@interface PGRelatedComputerOptions : NSObject <NSCopying>

@property (copy, nonatomic) NSSet *filteringLocalIdentifiers;
@property (copy, nonatomic) NSString *referenceAssetIdentifier;
@property (nonatomic) unsigned long long fetchLimit;
@property (nonatomic) char useDiversity;
@property (nonatomic) char shouldIncludeContainingEventKey;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;

@end
