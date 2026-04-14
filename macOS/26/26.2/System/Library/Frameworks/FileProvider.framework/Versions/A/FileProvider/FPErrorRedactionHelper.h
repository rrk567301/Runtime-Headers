@class NSError;

@interface FPErrorRedactionHelper : NSObject {
    NSError *_error;
    unsigned long long _depth;
}

- (id)redactedDescription;
- (void).cxx_destruct;
- (id)description;
- (id)initWithError:(id)a0 depth:(unsigned long long)a1;
- (id)parseErrorIntoStringRedacted:(BOOL)a0;

@end
