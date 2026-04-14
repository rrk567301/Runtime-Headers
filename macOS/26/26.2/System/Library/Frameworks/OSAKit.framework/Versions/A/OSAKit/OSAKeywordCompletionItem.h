@class NSString;

@interface OSAKeywordCompletionItem : NSObject <OSACompletionItem> {
    NSString *_keyword;
}

- (id)icon;
- (id)displayText;
- (id)name;
- (void)dealloc;
- (id)descriptionText;
- (id)completionText;
- (id)initWithKeyword:(id)a0;

@end
