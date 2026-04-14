@class NSString;

@interface IntelligenceFlowShared.QueryDecorationInput : NSObject {
    void /* unknown type, empty encoding */ query;
    void /* unknown type, empty encoding */ requestId;
    void /* unknown type, empty encoding */ caller;
    void /* unknown type, empty encoding */ maxToolsReturned;
    void /* unknown type, empty encoding */ maxSpansReturned;
    void /* unknown type, empty encoding */ maxUtteranceContextReturned;
    void /* unknown type, empty encoding */ requiredContextReturned;
    void /* unknown type, empty encoding */ spanTypeFilters;
    void /* unknown type, empty encoding */ servicesExecuted;
    void /* unknown type, empty encoding */ contextId;
    void /* unknown type, empty encoding */ loggingSalt;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
