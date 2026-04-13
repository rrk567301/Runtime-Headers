@class NSString;

@interface OSAKeywordCompletionItem : NSObject <OSACompletionItem> {
    NSString *_keyword;
}

- (void)dealloc;
- (id)name;
- (id)icon;
- (id)descriptionText;
- (id)displayText;
- (id)completionText;
- (id)initWithKeyword:(id)a0;

@end
