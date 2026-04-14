@class NSArray;

@interface MSUContentLocatorPackageSource : NSObject <PKPackageSource>

@property (retain) NSArray *modifiedPackageReferences;
@property (readonly) NSArray *allPackageReferences;

+ (id)_modifiedPackageReferencesForPackages:(id)a0;
+ (void /* function */ *)_contentLocatorFunction;
+ (void)_setContentLocatorFunction:(void /* function */ *)a0;

- (void).cxx_destruct;
- (id)initWithPackages:(id)a0;

@end
