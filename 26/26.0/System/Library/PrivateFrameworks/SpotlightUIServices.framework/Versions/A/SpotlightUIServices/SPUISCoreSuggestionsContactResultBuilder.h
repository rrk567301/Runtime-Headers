@class NSString;

@interface SPUISCoreSuggestionsContactResultBuilder : SPUISContactResultBuilder

@property (retain, nonatomic) NSString *suggestedContactIdentifier;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildCommand;
- (id)buildBadgingImageWithThumbnail:(id)a0;

@end
