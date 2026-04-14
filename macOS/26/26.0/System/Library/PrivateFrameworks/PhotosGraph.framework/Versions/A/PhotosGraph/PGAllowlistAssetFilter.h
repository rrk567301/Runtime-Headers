@class NSString, NSSet;

@interface PGAllowlistAssetFilter : NSObject <PGAssetFilter>

@property (class, readonly, nonatomic) NSString *name;

@property (readonly, nonatomic) NSSet *allowedAssetUUIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
