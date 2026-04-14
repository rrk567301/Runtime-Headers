@class NSString;

@interface OSANameCompletionItem : NSObject <OSACompletionItem> {
    NSString *_name;
}

- (id)icon;
- (id)displayText;
- (id)name;
- (id)initWithName:(id)a0;
- (void)dealloc;
- (id)descriptionText;
- (id)completionText;

@end
