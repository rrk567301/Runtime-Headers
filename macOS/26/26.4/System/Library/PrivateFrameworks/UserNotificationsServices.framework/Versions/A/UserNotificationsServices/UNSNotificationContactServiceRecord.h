@class NSString, _UNNotificationContact;

@interface UNSNotificationContactServiceRecord : NSObject

@property (retain, nonatomic) _UNNotificationContact *contact;
@property (retain, nonatomic) NSString *bundleIdentifier;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end
