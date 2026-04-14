@class NSString;

@interface OSATerminologyCompletionItem : NSObject <OSACompletionItem> {
    NSString *_terminology;
}

- (id)displayText;
- (id)icon;
- (void)dealloc;
- (id)name;
- (id)descriptionText;
- (id)completionText;
- (id)initWithTerminology:(id)a0;

@end
