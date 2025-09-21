@class NSNumber;

@interface BAAppExtensionInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSNumber *restrictedDownloadSizeRemaining;
@property (readonly) NSNumber *restrictedEssentialDownloadSizeRemaining;

- (id)initPrivately;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
