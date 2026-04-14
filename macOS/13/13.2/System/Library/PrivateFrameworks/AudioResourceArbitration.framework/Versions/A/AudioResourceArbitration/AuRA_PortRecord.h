@class NSDictionary;
@protocol AuRA_IOController, AuRA_VirtualPort;

@interface AuRA_PortRecord : NSObject <NSCopying>

@property (retain, nonatomic) id<AuRA_VirtualPort> port;
@property (retain, nonatomic) id<AuRA_IOController> ioController;
@property (retain, nonatomic) NSDictionary *volumeMuteMap;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
