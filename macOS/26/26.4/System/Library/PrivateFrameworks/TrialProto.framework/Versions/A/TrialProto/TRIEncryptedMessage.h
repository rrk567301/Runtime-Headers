@class NSData, TRIWKMS;

@interface TRIEncryptedMessage : TRIPBMessage

@property (copy, nonatomic) NSData *encryptedData;
@property (nonatomic) BOOL hasEncryptedData;
@property (readonly, nonatomic) int keyLocationOneOfCase;
@property (retain, nonatomic) TRIWKMS *wkms;
@property (nonatomic) int encryptionAlgorithm;
@property (nonatomic) BOOL hasEncryptionAlgorithm;

+ (id)descriptor;

@end
