@class NSData;

@interface NEIKEv2PrivateNotify : NSObject <NSCopying>

@property (nonatomic) unsigned short notifyStatus;
@property (retain, nonatomic) NSData *notifyData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithNotifyStatus:(unsigned short)a0 notifyData:(id)a1;

@end
