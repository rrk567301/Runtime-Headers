@class NSString;

@interface OSANameCompletionItem : NSObject <OSACompletionItem> {
    NSString *_name;
}

- (id)displayText;
- (id)initWithName:(id)a0;
- (id)name;
- (void)dealloc;
- (id)icon;
- (id)descriptionText;
- (id)completionText;

@end
