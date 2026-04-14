@class NSData, NSString;

@interface SMWindowsWiFiProfile : NSObject

@property (retain) NSData *SSID;
@property (retain) NSString *password;
@property unsigned long long securityType;
@property BOOL autoConnect;

+ (id)profileFromDictionary:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)addToInterface:(id)a0 error:(id *)a1;

@end
