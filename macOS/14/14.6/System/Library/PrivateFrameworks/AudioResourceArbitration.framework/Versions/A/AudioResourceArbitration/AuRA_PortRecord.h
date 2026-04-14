@class NSDictionary;
@protocol AuRA_IOController, AuRA_VirtualPort;

@interface AuRA_PortRecord : NSObject <NSCopying>

@property (retain, nonatomic) id<AuRA_VirtualPort> port;
@property (retain, nonatomic) id<AuRA_IOController> ioController;
@property (retain, nonatomic) NSDictionary *volumeMuteMap;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
