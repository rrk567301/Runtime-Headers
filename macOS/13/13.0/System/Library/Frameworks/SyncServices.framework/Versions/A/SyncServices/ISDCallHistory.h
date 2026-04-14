@class NSString, NSMutableArray;

@interface ISDCallHistory : NSObject {
    NSMutableArray *_callHistory;
    NSString *_filename;
    NSString *_clientIdentifier;
    BOOL _saveCallHistoryAggressively;
}

- (void)dealloc;
- (id)clientIdentifier;
- (id)initWithFilename:(id)a0 clientIdentifier:(id)a1 entityNames:(id)a2;
- (void)addCallHistoryWithMethodName:(id)a0 parameters:(id)a1;
- (id)_findUnreturnedMethodForMethodName:(id)a0;
- (void)setReturnedValue:(id)a0 forMethodName:(id)a1;
- (void)setException:(id)a0 forMethodName:(id)a1;
- (void)saveCallHistory;

@end
