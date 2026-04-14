@class NSString;

@interface OSANameCompletionItem : NSObject <OSACompletionItem> {
    NSString *_name;
}

- (void)dealloc;
- (id)displayText;
- (id)name;
- (id)icon;
- (id)initWithName:(id)a0;
- (id)descriptionText;
- (id)completionText;

@end
