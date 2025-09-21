@class NSArray;

@interface AKURLRequestApprover : NSObject {
    NSArray *_whiteListedPaths;
}

- (void).cxx_destruct;
- (char)_matchInputAgainstPaths:(id)a0;
- (id)initWithWhitelistedPaths:(id)a0;
- (char)shouldAllowRequest:(id)a0;

@end
