@class NSString;

@interface OSATerminologyCompletionItem : NSObject <OSACompletionItem> {
    NSString *_terminology;
}

- (void)dealloc;
- (id)displayText;
- (id)name;
- (id)icon;
- (id)descriptionText;
- (id)completionText;
- (id)initWithTerminology:(id)a0;

@end
