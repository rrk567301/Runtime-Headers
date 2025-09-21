@class NSString, NSObject;

@interface ExpressESEEntity : NSManagedObject

@property (copy, nonatomic) NSString *aid;
@property (retain, nonatomic) NSObject *aliroGroupResolvingKeys;
@property (retain, nonatomic) NSObject *associatedReaderIdentifiers;
@property (retain, nonatomic) NSObject *ecp2Info;
@property (nonatomic) char expressEnabled;
@property (nonatomic) int groupActivationStyle;
@property (copy, nonatomic) NSString *groupHead;
@property (retain, nonatomic) NSObject *groupMembers;
@property (nonatomic) char inSessionOnly;
@property (nonatomic) char isUserChoice;
@property (copy, nonatomic) NSString *keyID;
@property (copy, nonatomic) NSString *moduleID;
@property (copy, nonatomic) NSString *passID;
@property (copy, nonatomic) NSString *readerID;
@property (nonatomic) char supportsUWB;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) char uwbExpressEnabled;
@property (nonatomic) int version;

+ (id)fetchRequest;

@end
