@class NSString;

@interface _PFPersistentHistoryFetchModel : NSObject <_PFAncillaryModelFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (unsigned long long)ancillaryEntityOffset;
+ (void)_invalidateStaticCaches;
+ (id)ancillaryModelNamespace;
+ (unsigned long long)ancillaryEntityCount;


@end
