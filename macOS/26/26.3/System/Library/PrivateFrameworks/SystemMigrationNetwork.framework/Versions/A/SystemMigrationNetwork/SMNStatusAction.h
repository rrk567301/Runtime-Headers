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

- (BOOL)keepAlive;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)requestPayload;
- (BOOL)expectsAResult;
- (BOOL)returnsData;

@end
