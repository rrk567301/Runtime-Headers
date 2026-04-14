@class NSMutableDictionary;

@interface APRequest : APMessage

@property (retain) NSMutableDictionary *recordInfo;
@property (copy) id /* block */ retrieveData;

+ (id)requestWithType:(int)a0 recordInfo:(id)a1 retrieveData:(id /* block */)a2;
+ (id)requestWithType:(int)a0 recordInfo:(id)a1 timeDelta:(double)a2 retrieveData:(id /* block */)a3;

- (void).cxx_destruct;
- (id)logHandle;
- (id)evaluatePolicyAndReturnResponse;
- (void)_convertToNSNumberTimeIntervalIfNeeded:(id)a0;
- (long long)evaluatePolicyAndReturnExpiration;
- (int)evaluatePolicyAndReturnResultAndError:(id *)a0;
- (id)initWithType:(int)a0 recordInfo:(id)a1 timeDelta:(double)a2 retrieveData:(id /* block */)a3;

@end
