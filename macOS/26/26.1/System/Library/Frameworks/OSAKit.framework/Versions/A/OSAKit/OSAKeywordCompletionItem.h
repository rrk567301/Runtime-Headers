@class NSString;

@interface OSAKeywordCompletionItem : NSObject <OSACompletionItem> {
    NSString *_keyword;
}

- (id)displayText;
- (id)icon;
- (void)dealloc;
- (id)name;
- (id)descriptionText;
- (id)completionText;
- (id)initWithKeyword:(id)a0;

@end
