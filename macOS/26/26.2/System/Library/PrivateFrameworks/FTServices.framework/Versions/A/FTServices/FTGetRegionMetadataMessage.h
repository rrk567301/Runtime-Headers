@class NSString, NSDictionary;

@interface FTGetRegionMetadataMessage : IDSBaseMessage <NSCopying>

@property (copy) NSString *language;
@property (copy) NSDictionary *responseRegionInformation;

- (id)messageBody;
- (void)handleResponseDictionary:(id)a0;
- (long long)responseCommand;
- (long long)command;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)wantsBAASigning;
- (BOOL)wantsBinaryPush;
- (void).cxx_destruct;
- (BOOL)wantsCompressedBody;
- (id)init;
- (id)requiredKeys;
- (id)bagKey;
- (BOOL)wantsBagKey;
- (BOOL)wantsHTTPGet;
- (BOOL)wantsHTTPHeaders;

@end
