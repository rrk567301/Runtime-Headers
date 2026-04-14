@class NSNumber, NSDictionary;

@interface SMNWindowsSizingAction : SMNAction {
    NSDictionary *result;
}

@property (retain) NSNumber *componentIdentifier;
@property BOOL cancel;

+ (int)actionID;

- (void).cxx_destruct;
- (void)setResult:(id)a0;
- (id)description;
- (id)result;
- (id)requestPayload;
- (BOOL)expectsAResult;
- (id)initWithCancelRequest;
- (id)initWithComponentIdentifier:(id)a0;
- (BOOL)setResultFromDict:(id)a0;

@end
