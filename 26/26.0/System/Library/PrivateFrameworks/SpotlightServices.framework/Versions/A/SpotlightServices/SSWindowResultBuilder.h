@class NSString;

@interface SSWindowResultBuilder : SSResultBuilder

@property (retain) NSString *processInstanceIdentifier;

+ (BOOL)supportsResult:(id)a0;
+ (BOOL)isCoreSpotlightResult;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildCommand;
- (id)buildBadgingImageWithThumbnail:(id)a0;
- (id)buildDescriptions;
- (id)buildThumbnail;
- (id)buildWindowAppImage;
- (id)buildWindowSymbolImage;

@end
