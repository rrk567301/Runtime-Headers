@class NSString;

@interface IntelligenceFlowShared.QueryDecorationInput : NSObject {
    void /* unknown type, empty encoding */ query;
    void /* unknown type, empty encoding */ requestId;
    void /* unknown type, empty encoding */ caller;
    void /* unknown type, empty encoding */ servicesExecuted;
    void /* unknown type, empty encoding */ timeout;
    void /* unknown type, empty encoding */ contextId;
    void /* unknown type, empty encoding */ loggingSalt;
    void /* unknown type, empty encoding */ deviceIdsID;
    void /* unknown type, empty encoding */ previousQueries;
    void /* unknown type, empty encoding */ refreshServices;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
