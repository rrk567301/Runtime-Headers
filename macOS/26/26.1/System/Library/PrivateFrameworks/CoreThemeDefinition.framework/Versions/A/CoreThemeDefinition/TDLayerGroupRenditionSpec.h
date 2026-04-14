@class NSOrderedSet;

@interface TDLayerGroupRenditionSpec : TDRenditionSpec

@property (retain, nonatomic) NSOrderedSet *layerReferences;

+ (id)fetchRequest;

- (id)createCSIRepresentationWithCompression:(BOOL)a0 colorSpaceID:(unsigned long long)a1 document:(id)a2;

@end
