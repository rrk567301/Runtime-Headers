@class NSString;

@interface UARPTLVPersonalizationManifestPrefixOS : UARPMetaDataTLVStringOS

@property (readonly) NSString *ticketPrefix;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)generateTLV;
- (void)setTicketPrefix:(id)a0;
- (id)tlvValue;

@end
