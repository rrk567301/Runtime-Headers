@class NSString, NSArray;

@interface UAFAssetConfiguration : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL ignoreOSCompatibility;
@property (retain, nonatomic) NSArray *expansions;

+ (BOOL)isValid:(id)a0 validUsageTypes:(id)a1 error:(id *)a2;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)getAutoAssetSpecifier:(id)a0;

@end
