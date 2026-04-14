@class NSString;

@interface SSSystemPreferenceResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSString *name;

+ (id)bundleId;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildThumbnail;

@end
