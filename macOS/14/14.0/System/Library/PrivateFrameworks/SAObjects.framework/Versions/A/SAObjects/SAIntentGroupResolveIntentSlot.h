@class SAIntentGroupProtobufMessage, NSString, NSNumber;

@interface SAIntentGroupResolveIntentSlot : SABaseClientBoundCommand

@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (copy, nonatomic) NSString *intentSlotKeyPath;
@property (copy, nonatomic) NSNumber *intentSlotValueIndex;
@property (copy, nonatomic) NSString *jsonEncodedIntent;

+ (id)resolveIntentSlot;
+ (id)resolveIntentSlotWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)mutatingCommand;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
