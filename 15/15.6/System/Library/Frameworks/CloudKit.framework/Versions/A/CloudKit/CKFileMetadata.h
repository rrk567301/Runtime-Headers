@class NSNumber;

@interface CKFileMetadata : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *deviceID;
@property (readonly, copy, nonatomic) NSNumber *fileID;
@property (readonly, copy, nonatomic) NSNumber *generationID;
@property (readonly, copy, nonatomic) NSNumber *modTimeInSeconds;
@property (readonly, copy, nonatomic) NSNumber *fileSize;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDeviceID:(id)a0 fileID:(id)a1 generationID:(id)a2 modTimeInSeconds:(id)a3 fileSize:(id)a4;
- (id)initWithFileSize:(id)a0;

@end
