@class NSString, _UNNotificationContact;

@interface _UNNotificationContactServiceRecord : NSObject

@property (retain, nonatomic) _UNNotificationContact *contact;
@property (retain, nonatomic) NSString *bundleIdentifier;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
