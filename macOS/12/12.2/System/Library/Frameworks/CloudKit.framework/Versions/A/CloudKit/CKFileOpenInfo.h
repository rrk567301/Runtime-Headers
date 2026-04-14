@class NSString, NSNumber, NSFileHandle;

@interface CKFileOpenInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *UUID;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSNumber *deviceID;
@property (retain, nonatomic) NSNumber *fileID;
@property (retain, nonatomic) NSNumber *generationID;
@property (nonatomic) BOOL shouldReadRawEncryptedData;
@property (retain, nonatomic) NSFileHandle *clientOpenedFileHandle;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;

@end
