@class NSString, NSDictionary;

@interface FTGetRegionMetadataMessage : IDSBaseMessage <NSCopying>

@property (copy) NSString *language;
@property (copy) NSDictionary *responseRegionInformation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (long long)command;
- (id)messageBody;
- (long long)responseCommand;
- (id)requiredKeys;
- (BOOL)wantsHTTPHeaders;
- (BOOL)wantsBinaryPush;
- (BOOL)wantsCompressedBody;
- (BOOL)wantsHTTPGet;
- (BOOL)wantsBagKey;
- (id)bagKey;
- (void)handleResponseDictionary:(id)a0;

@end
