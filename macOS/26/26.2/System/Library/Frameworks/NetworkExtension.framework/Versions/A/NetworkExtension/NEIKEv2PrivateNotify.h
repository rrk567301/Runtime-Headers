@class NSData;

@interface NEIKEv2PrivateNotify : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned short notifyStatus;
@property (readonly, nonatomic) NSData *notifyData;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithNotifyStatus:(unsigned short)a0 notifyData:(id)a1;

@end
