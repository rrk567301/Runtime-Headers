@class NSString;

@interface OSATerminologyCompletionItem : NSObject <OSACompletionItem> {
    NSString *_terminology;
}

- (id)displayText;
- (id)name;
- (void)dealloc;
- (id)icon;
- (id)descriptionText;
- (id)completionText;
- (id)initWithTerminology:(id)a0;

@end
