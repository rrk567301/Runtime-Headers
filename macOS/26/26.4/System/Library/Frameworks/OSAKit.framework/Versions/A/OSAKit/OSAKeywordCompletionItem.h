@class NSString;

@interface OSAKeywordCompletionItem : NSObject <OSACompletionItem> {
    NSString *_keyword;
}

- (id)name;
- (id)icon;
- (id)displayText;
- (void)dealloc;
- (id)descriptionText;
- (id)completionText;
- (id)initWithKeyword:(id)a0;

@end
