@interface ASTConnectionUtilities : NSObject

+ (id)MD5HeaderValueForTask:(id)a0;
+ (unsigned long long)allowCellularSizeThreshold;
+ (char)didEncounterNetworkDisconnectionError:(id)a0;
+ (id)getServerLoggingSelection;
+ (char)isGzipEnabled;
+ (char)isValidResponse:(id)a0;
+ (char)relaxTimeouts;
+ (char)trustIsValidWithProtectionSpace:(id)a0 rootOfTrust:(unsigned long long)a1;
+ (char)useChunkedTransferEncoding;

@end
