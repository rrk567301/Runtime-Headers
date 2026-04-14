@class NSNumber, NSDictionary;

@interface SMNWindowsSizingAction : SMNAction {
    NSDictionary *result;
}

@property (retain) NSNumber *componentIdentifier;
@property BOOL cancel;

+ (int)actionID;

- (id)result;
- (void)setResult:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)requestPayload;
- (BOOL)expectsAResult;
- (id)initWithCancelRequest;
- (id)initWithComponentIdentifier:(id)a0;
- (BOOL)setResultFromDict:(id)a0;

@end
