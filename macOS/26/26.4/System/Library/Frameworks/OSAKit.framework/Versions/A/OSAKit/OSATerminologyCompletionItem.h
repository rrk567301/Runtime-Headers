@class NSString;

@interface OSATerminologyCompletionItem : NSObject <OSACompletionItem> {
    NSString *_terminology;
}

- (id)name;
- (id)icon;
- (id)displayText;
- (void)dealloc;
- (id)descriptionText;
- (id)completionText;
- (id)initWithTerminology:(id)a0;

@end
