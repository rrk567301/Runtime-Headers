@class NSNumber;

@interface BAAppExtensionInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSNumber *restrictedDownloadSizeRemaining;
@property (readonly) NSNumber *restrictedEssentialDownloadSizeRemaining;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initPrivately;
- (void).cxx_destruct;
- (id)init;

@end
