@interface ASTConnectionUtilities : NSObject

+ (BOOL)didEncounterNetworkDisconnectionError:(id)a0;
+ (BOOL)isValidResponse:(id)a0;
+ (BOOL)relaxTimeouts;
+ (id)getServerLoggingSelection;
+ (id)MD5HeaderValueForTask:(id)a0;
+ (BOOL)isGzipEnabled;
+ (BOOL)useChunkedTransferEncoding;
+ (unsigned long long)allowCellularSizeThreshold;
+ (BOOL)trustIsValidWithProtectionSpace:(id)a0 rootOfTrust:(unsigned long long)a1;

@end
