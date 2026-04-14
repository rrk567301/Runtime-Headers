@class NSString, NSDictionary;

@interface FTGetRegionMetadataMessage : IDSBaseMessage <NSCopying>

@property (copy) NSString *language;
@property (copy) NSDictionary *responseRegionInformation;

- (BOOL)wantsCompressedBody;
- (long long)responseCommand;
- (BOOL)wantsBinaryPush;
- (void)handleResponseDictionary:(id)a0;
- (id)requiredKeys;
- (BOOL)wantsBAASigning;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)messageBody;
- (id)bagKey;
- (long long)command;
- (id)init;
- (BOOL)wantsBagKey;
- (BOOL)wantsHTTPGet;
- (BOOL)wantsHTTPHeaders;

@end
