@class NSString;

@interface OSATerminologyCompletionItem : NSObject <OSACompletionItem> {
    NSString *_terminology;
}

- (id)icon;
- (id)displayText;
- (id)name;
- (void)dealloc;
- (id)descriptionText;
- (id)completionText;
- (id)initWithTerminology:(id)a0;

@end
