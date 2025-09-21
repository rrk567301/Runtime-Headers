@class NSString;

@interface NSSQLiteIndexTrackingModel : NSObject <_PFAncillaryModelFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_invalidateStaticCaches;
+ (unsigned long long)ancillaryEntityOffset;
+ (void)initialize;
+ (unsigned long long)ancillaryEntityCount;
+ (id)ancillaryModelNamespace;


@end
