@class NSString, NSDictionary;

@interface FTGetRegionMetadataMessage : IDSBaseMessage <NSCopying>

@property (copy) NSString *language;
@property (copy) NSDictionary *responseRegionInformation;

- (id)bagKey;
- (long long)responseCommand;
- (id)init;
- (BOOL)wantsBAASigning;
- (void).cxx_destruct;
- (BOOL)wantsBinaryPush;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)messageBody;
- (BOOL)wantsCompressedBody;
- (id)requiredKeys;
- (long long)command;
- (void)handleResponseDictionary:(id)a0;
- (BOOL)wantsBagKey;
- (BOOL)wantsHTTPGet;
- (BOOL)wantsHTTPHeaders;

@end
