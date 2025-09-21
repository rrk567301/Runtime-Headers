@interface AVB17221AECPAEMAuthenticationGetKeychainListCommand : AVB17221AECPAEMMessage

@property (nonatomic) unsigned short keychainID;
@property (nonatomic) unsigned short listIndex;

+ (id)responseMessage;
+ (id)keyPathsForValuesAffectingKeychainID;
+ (id)keyPathsForValuesAffectingListIndex;

- (void)setListIndex:(unsigned short)a0;
- (id)init;
- (unsigned short)listIndex;
- (unsigned short)keychainID;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setKeychainID:(unsigned short)a0;

@end
