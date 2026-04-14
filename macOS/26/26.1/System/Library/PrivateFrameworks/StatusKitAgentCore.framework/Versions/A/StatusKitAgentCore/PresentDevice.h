@class NSString, NSData, NSDate;

@interface PresentDevice : NSManagedObject

@property (copy, nonatomic) NSDate *assertionTime;
@property (copy, nonatomic) NSString *channelID;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSString *deviceTokenURI;
@property (copy, nonatomic) NSString *handle;
@property (nonatomic) BOOL isSelfDevice;
@property (nonatomic) BOOL isSelfHandle;
@property (retain, nonatomic) NSData *presencePayload;

+ (id)fetchRequest;
+ (id)channelIdentifierKeyPath;
+ (id)deviceIdentifierKeyPath;
+ (id)predicateForChannel:(id)a0;
+ (id)predicateForChannelIdentifier:(id)a0 deviceIdentifier:(id)a1;

@end
