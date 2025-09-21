@class NSString, NSArray;

@interface SMNLegacyPathingAction : SMNAction

@property (retain) NSString *operation;
@property (retain) NSArray *paths;
@property (retain) NSArray *omitPaths;
@property (readonly, getter=isHandshake) char handshake;

+ (int)actionID;

- (id)description;
- (void).cxx_destruct;
- (char)success;
- (id)resultData;
- (id)requestPayload;
- (id)resultDictionary;
- (id)initWithOperation:(id)a0 paths:(id)a1 omitPaths:(id)a2;
- (id)arrayOfStrings:(id)a0;
- (char)returnsData;
- (char)setResultFromDict:(id)a0;
- (id)slingshotServerInformation;

@end
