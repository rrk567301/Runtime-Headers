@class NSString, NSData;

@interface CKDPushToken : NSObject

@property (readonly, copy, nonatomic) NSString *apsEnvironmentString;
@property (readonly, copy, nonatomic) NSData *apsToken;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithAPSEnvironmentString:(id)a0 apsToken:(id)a1;

@end
