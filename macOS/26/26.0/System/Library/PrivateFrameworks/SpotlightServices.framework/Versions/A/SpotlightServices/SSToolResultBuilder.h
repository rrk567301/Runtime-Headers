@class NSString, SFRichText, NSData;

@interface SSToolResultBuilder : SSShortcutResultBuilder

@property (retain) NSString *toolIdentifier;
@property (retain) SFRichText *parameterizedTitle;
@property (retain) NSData *toolInvocationData;
@property (retain, nonatomic) NSString *toolType;

+ (BOOL)supportsResult:(id)a0;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildCommand;
- (id)buildDescriptions;
- (id)buildStandardThumbnail;
- (id)buildTitle;
- (id)trailingThumbnailSymbol;

@end
