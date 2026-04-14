@class NSString;

@interface IDSKTState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *userID;
@property int status;
@property BOOL containsAccountKey;
@property BOOL containsDeviceSignature;
@property unsigned long long optedIn;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUserID:(id)a0 registrationStatus:(int)a1 containsAccountKey:(BOOL)a2 containsDeviceSignature:(BOOL)a3 optedIn:(unsigned long long)a4;

@end
