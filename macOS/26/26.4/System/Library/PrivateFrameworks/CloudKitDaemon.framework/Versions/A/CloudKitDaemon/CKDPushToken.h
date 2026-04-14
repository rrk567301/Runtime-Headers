@class NSString, NSData;

@interface CKDPushToken : NSObject

@property (readonly, copy, nonatomic) NSString *apsEnvironmentString;
@property (readonly, copy, nonatomic) NSData *apsToken;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithAPSEnvironmentString:(id)a0 apsToken:(id)a1;

@end
