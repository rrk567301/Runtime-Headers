@class NSString;

@interface OSATerminologyCompletionItem : NSObject <OSACompletionItem> {
    NSString *_terminology;
}

- (void)dealloc;
- (id)name;
- (id)icon;
- (id)descriptionText;
- (id)displayText;
- (id)completionText;
- (id)initWithTerminology:(id)a0;

@end
