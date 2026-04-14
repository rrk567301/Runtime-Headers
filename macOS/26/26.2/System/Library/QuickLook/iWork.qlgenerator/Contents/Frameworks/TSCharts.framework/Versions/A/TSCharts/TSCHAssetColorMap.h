@class NSDictionary;

@interface TSCHAssetColorMap : NSObject {
    NSDictionary *_assetPathToColorMap;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)colorForFilename:(id)a0 fillSetIdentifier:(id)a1;
- (id)colorForFilename:(id)a0 imageSetIdentifier:(id)a1;

@end
