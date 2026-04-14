@class NSString, SFRichText, NSData;

@interface SPUISToolResultBuilder : SPUISShortcutResultBuilder

@property (retain) NSString *toolIdentifier;
@property (retain) SFRichText *parameterizedTitle;
@property (retain) NSData *toolInvocationData;
@property (retain) NSData *toolIconData;
@property (retain, nonatomic) NSString *toolType;

+ (BOOL)supportsResult:(id)a0;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildCommand;
- (id)buildBadgingImageWithThumbnail:(id)a0;
- (id)buildDescriptions;
- (id)buildSecondaryCommand;
- (id)buildStandardThumbnail;
- (id)buildTitle;
- (id)trailingThumbnailSymbol;

@end
