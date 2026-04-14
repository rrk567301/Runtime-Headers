@class NSString;

@interface OSANameCompletionItem : NSObject <OSACompletionItem> {
    NSString *_name;
}

- (id)displayText;
- (id)icon;
- (void)dealloc;
- (id)initWithName:(id)a0;
- (id)name;
- (id)descriptionText;
- (id)completionText;

@end
