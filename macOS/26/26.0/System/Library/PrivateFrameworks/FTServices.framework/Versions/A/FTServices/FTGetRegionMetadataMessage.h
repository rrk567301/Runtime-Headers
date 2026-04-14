@class NSString, NSDictionary;

@interface FTGetRegionMetadataMessage : IDSBaseMessage <NSCopying>

@property (copy) NSString *language;
@property (copy) NSDictionary *responseRegionInformation;

- (id)bagKey;
- (long long)command;
- (BOOL)wantsBAASigning;
- (id)requiredKeys;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)wantsBinaryPush;
- (id)init;
- (long long)responseCommand;
- (void)handleResponseDictionary:(id)a0;
- (BOOL)wantsCompressedBody;
- (id)messageBody;
- (void).cxx_destruct;
- (BOOL)wantsBagKey;
- (BOOL)wantsHTTPGet;
- (BOOL)wantsHTTPHeaders;

@end
