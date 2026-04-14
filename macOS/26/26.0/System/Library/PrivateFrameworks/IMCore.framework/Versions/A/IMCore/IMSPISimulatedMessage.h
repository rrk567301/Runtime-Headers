@class NSString, NSArray, NSData, NSDate, NSDictionary;

@interface IMSPISimulatedMessage : NSObject

@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *sender;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSString *accountID;
@property (nonatomic) BOOL fromMe;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSString *effectID;
@property (nonatomic) unsigned long long flags;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSData *payloadData;
@property (retain, nonatomic) NSString *threadIdentifier;
@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSString *chatGUID;
@property (retain, nonatomic) NSArray *handles;
@property (retain, nonatomic) NSString *lastAddressedHandle;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)_dateFormatter;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)_calculateGUID;
- (id)_calculateSender;
- (id)_calculateServiceName;
- (id)_calculateTimestamp;
- (id)_createItem;
- (id)_createSimulatedMessage;

@end
