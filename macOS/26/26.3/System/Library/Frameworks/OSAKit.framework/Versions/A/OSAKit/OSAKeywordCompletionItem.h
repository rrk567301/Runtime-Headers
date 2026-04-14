@class NSString;

@interface OSAKeywordCompletionItem : NSObject <OSACompletionItem> {
    NSString *_keyword;
}

- (id)displayText;
- (id)name;
- (void)dealloc;
- (id)icon;
- (id)descriptionText;
- (id)completionText;
- (id)initWithKeyword:(id)a0;

@end
