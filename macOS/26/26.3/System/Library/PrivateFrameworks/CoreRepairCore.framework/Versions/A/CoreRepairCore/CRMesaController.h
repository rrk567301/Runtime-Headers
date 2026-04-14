@interface CRMesaController : NSObject

+ (int)getProtocolVersion;

- (BOOL)isPaired:(int *)a0;
- (BOOL)clearPhysicalPresence;
- (BOOL)isPhysicalPresenceAsserted;

@end
