@class NSString;

@interface OSANameCompletionItem : NSObject <OSACompletionItem> {
    NSString *_name;
}

- (id)name;
- (id)icon;
- (id)displayText;
- (id)initWithName:(id)a0;
- (void)dealloc;
- (id)descriptionText;
- (id)completionText;

@end
