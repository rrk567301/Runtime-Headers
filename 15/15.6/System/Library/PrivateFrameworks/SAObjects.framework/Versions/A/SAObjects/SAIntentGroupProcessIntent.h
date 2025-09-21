@class SAIntentGroupProtobufMessage, NSArray, NSString;

@interface SAIntentGroupProcessIntent : SABaseClientBoundCommand

@property (nonatomic) char allowsPunchOut;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (copy, nonatomic) NSArray *intentSlotKeyPaths;
@property (copy, nonatomic) NSString *jsonEncodedIntent;
@property (nonatomic) char shouldRunHandleIntent;

+ (id)processIntent;
+ (id)processIntentWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
