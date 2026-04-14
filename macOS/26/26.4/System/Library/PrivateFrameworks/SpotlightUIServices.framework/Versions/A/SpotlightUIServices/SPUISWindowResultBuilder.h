@class NSString;

@interface SPUISWindowResultBuilder : SPUISResultBuilder

@property (retain) NSString *processInstanceIdentifier;

+ (BOOL)supportsResult:(id)a0;
+ (BOOL)isCoreSpotlightResult;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildCommand;
- (id)buildBadgingImageWithThumbnail:(id)a0;
- (id)buildDescriptions;
- (id)buildThumbnail;
- (id)buildWindowAppImage;
- (id)buildWindowSymbolImage;

@end
