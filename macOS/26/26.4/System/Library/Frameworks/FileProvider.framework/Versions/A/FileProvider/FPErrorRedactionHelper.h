@class NSError;

@interface FPErrorRedactionHelper : NSObject {
    NSError *_error;
    unsigned long long _depth;
}

- (void).cxx_destruct;
- (id)description;
- (id)redactedDescription;
- (id)initWithError:(id)a0 depth:(unsigned long long)a1;
- (id)parseErrorIntoStringRedacted:(BOOL)a0;

@end
