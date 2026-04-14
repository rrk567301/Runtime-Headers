@class NSString, NSDictionary;

@interface FTGetRegionMetadataMessage : IDSBaseMessage <NSCopying>

@property (copy) NSString *language;
@property (copy) NSDictionary *responseRegionInformation;

- (long long)responseCommand;
- (id)bagKey;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)wantsBinaryPush;
- (long long)command;
- (BOOL)wantsBAASigning;
- (id)messageBody;
- (void).cxx_destruct;
- (void)handleResponseDictionary:(id)a0;
- (id)requiredKeys;
- (id)init;
- (BOOL)wantsCompressedBody;
- (BOOL)wantsBagKey;
- (BOOL)wantsHTTPGet;
- (BOOL)wantsHTTPHeaders;

@end
