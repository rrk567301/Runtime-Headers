@class NSNumber, NSString, NSArray;

@interface SMNStatusAction : SMNAction

@property (retain) NSNumber *timeRemaining;
@property (retain) NSNumber *percentDone;
@property (retain) NSString *text;
@property (retain) NSArray *arguments;
@property (retain) NSArray *errorsAndWarnings;
@property (retain) NSString *sourceInterfaceTypeString;
@property unsigned long long sourceInterfaceType;
@property unsigned long long sourceInterfaceIconType;

+ (int)actionID;
+ (id)actionWithPayload:(id)a0;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)keepAlive;
- (id)requestPayload;
- (char)expectsAResult;
- (char)returnsData;

@end
