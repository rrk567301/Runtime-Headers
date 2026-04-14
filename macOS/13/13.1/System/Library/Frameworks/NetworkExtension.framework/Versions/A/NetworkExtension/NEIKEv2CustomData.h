@class NSData;

@interface NEIKEv2CustomData : NSObject <NSCopying>

@property unsigned long long customType;
@property (retain) NSData *customData;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
