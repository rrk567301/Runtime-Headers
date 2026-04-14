@class NSString;

@interface _PFPersistentHistoryModel : NSObject <_PFAncillaryModelFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)ancillaryEntityOffset;
+ (void)_invalidateStaticCaches;
+ (void)initialize;
+ (id)ancillaryModelNamespace;
+ (unsigned long long)ancillaryEntityCount;


@end
