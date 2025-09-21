@class NSNumber, NSDictionary;

@interface SMNWindowsSizingAction : SMNAction {
    NSDictionary *result;
}

@property (retain) NSNumber *componentIdentifier;
@property char cancel;

+ (int)actionID;

- (id)description;
- (void).cxx_destruct;
- (id)result;
- (void)setResult:(id)a0;
- (id)requestPayload;
- (char)expectsAResult;
- (id)initWithCancelRequest;
- (id)initWithComponentIdentifier:(id)a0;
- (char)setResultFromDict:(id)a0;

@end
