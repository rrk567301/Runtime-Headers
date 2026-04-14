@class NSString;

@interface SRUIFMiniSnippetInformation : NSObject

@property (readonly, copy, nonatomic) NSString *rewrittenQuery;
@property (readonly, copy, nonatomic) NSString *applicationIdentifier;

- (void).cxx_destruct;
- (id)initWithApplicationIdentifier:(id)a0;
- (id)initWithRewrittenQuery:(id)a0;

@end
