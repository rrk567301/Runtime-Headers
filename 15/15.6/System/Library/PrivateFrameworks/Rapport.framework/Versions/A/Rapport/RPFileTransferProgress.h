@class NSString, NSError;

@interface RPFileTransferProgress : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double bytesPerSecond;
@property (nonatomic) double remainingSeconds;
@property (nonatomic) double compressionRate;
@property (copy, nonatomic) NSString *currentFilename;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) int linkType;
@property (nonatomic) long long transferredByteCount;
@property (nonatomic) long long totalByteCount;
@property (nonatomic) long long transferredFileCount;
@property (nonatomic) long long totalFileCount;
@property (nonatomic) int type;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;

@end
