@interface BNEPControl : NSObject

+ (int)connect:(id)a0 service:(unsigned short)a1;
+ (int)disconnect:(id)a0 service:(unsigned short)a1;
+ (void)createEthernetController;

@end
