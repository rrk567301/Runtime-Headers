@class NSError;

@interface FPErrorRedactionHelper : NSObject {
    NSError *_error;
    unsigned long long _depth;
}

- (id)description;
- (id)redactedDescription;
- (void).cxx_destruct;
- (id)parseErrorIntoStringRedacted:(BOOL)a0;
- (id)initWithError:(id)a0 depth:(unsigned long long)a1;

@end
