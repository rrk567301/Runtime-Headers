@interface SGMailQuoteParser : NSObject

+ (id)quotedRegionsFrom:(id)a0 isAOSPMail:(BOOL)a1 foundToEndOfMessage:(BOOL *)a2;
+ (id)_tofuRegions:(id)a0 utf8:(const char *)a1 isAOSPMail:(BOOL)a2;
+ (id)_xWrote:(id)a0 utf8:(const char *)a1;

@end
