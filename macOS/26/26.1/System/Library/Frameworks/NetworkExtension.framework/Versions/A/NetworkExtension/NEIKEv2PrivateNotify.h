@class NSData;

@interface NEIKEv2PrivateNotify : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned short notifyStatus;
@property (readonly, nonatomic) NSData *notifyData;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithNotifyStatus:(unsigned short)a0 notifyData:(id)a1;

@end
