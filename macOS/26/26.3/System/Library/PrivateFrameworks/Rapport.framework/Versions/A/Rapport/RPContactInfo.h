@class NSString, NSData, NSDate;

@interface RPContactInfo : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSData *imageData;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSDate *expiryDate;

- (void).cxx_destruct;
- (id)initIdentifier:(id)a0 imageData:(id)a1 deviceName:(id)a2 givenName:(id)a3 familyName:(id)a4 expiryDate:(id)a5;

@end
