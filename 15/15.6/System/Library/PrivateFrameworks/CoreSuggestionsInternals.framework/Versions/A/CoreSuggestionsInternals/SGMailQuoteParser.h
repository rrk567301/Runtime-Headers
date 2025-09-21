@interface SGMailQuoteParser : NSObject

+ (id)_tofuRegions:(id)a0 utf8:(const char *)a1 isAOSPMail:(char)a2;
+ (id)_xWrote:(id)a0 utf8:(const char *)a1;
+ (id)quotedRegionsFrom:(id)a0 isAOSPMail:(char)a1 foundToEndOfMessage:(char *)a2;

@end
