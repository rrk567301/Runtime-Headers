@class NSString, NSData;

@interface FTiMessageRequestMMCSDownloadToken : IDSMessage <NSCopying>

@property (copy) NSString *owner;
@property (copy) NSData *signature;
@property (copy) NSString *responseAuthToken;
@property (copy) NSString *responseRequestorID;
@property long long contentVersion;
@property (copy) NSString *contentHeaders;
@property (copy) NSString *authURLString;
@property (copy) NSData *responseContentBody;
@property long long responseContentVersion;

- (long long)command;
- (id)requiredKeys;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (long long)responseCommand;
- (void)handleResponseDictionary:(id)a0;
- (id)messageBody;
- (void).cxx_destruct;

@end
