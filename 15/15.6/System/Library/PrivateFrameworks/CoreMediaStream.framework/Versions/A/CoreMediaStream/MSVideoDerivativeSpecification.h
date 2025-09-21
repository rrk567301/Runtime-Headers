@class NSString;

@interface MSVideoDerivativeSpecification : NSObject

@property (readonly, nonatomic) char useCellular;
@property (readonly, nonatomic) char powerRequired;
@property (readonly, nonatomic) double bitRate;
@property (readonly, nonatomic) NSString *videoType;
@property (readonly, nonatomic) unsigned long long mediaAssetType;

+ (id)videoDerivativeSpecificationsWithDictionaryArray:(id)a0;

- (id)initWithDictionary:(id)a0;

@end
