@class IRContext;

@interface IRHomeSuggestionContext : NSObject {
    void /* unknown type, empty encoding */ siriSuggestions;
}

@property (nonatomic, readonly) IRContext *context;

- (void).cxx_destruct;
- (id)init;
- (id)initWithContext:(id)a0 siriSuggestions:(id)a1;

@end
