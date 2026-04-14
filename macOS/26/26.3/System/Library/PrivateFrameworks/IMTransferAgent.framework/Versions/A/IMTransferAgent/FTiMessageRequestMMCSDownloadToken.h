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

- (long long)responseCommand;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)messageBody;
- (id)requiredKeys;
- (long long)command;
- (void)handleResponseDictionary:(id)a0;

@end
