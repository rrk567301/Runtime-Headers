@class NSString;

@interface OSAKeywordCompletionItem : NSObject <OSACompletionItem> {
    NSString *_keyword;
}

- (void)dealloc;
- (id)displayText;
- (id)name;
- (id)icon;
- (id)descriptionText;
- (id)completionText;
- (id)initWithKeyword:(id)a0;

@end
