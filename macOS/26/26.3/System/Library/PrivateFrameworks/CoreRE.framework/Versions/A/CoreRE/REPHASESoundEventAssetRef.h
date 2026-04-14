@class NSArray, PHASESoundEventNodeAsset;

@interface REPHASESoundEventAssetRef : NSObject

@property (retain, nonatomic) PHASESoundEventNodeAsset *asset;
@property (retain, nonatomic) NSArray *mixerIdentifiers;

- (void).cxx_destruct;

@end
