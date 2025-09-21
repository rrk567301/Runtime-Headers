@class NSString, NSDate;

@interface CPLChangeSessionUpdate : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *libraryVersion;
@property (readonly, nonatomic) NSDate *queuedDate;
@property (readonly, nonatomic) NSString *statusDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStore:(id)a0;
- (char)applyToStore:(id)a0 error:(id *)a1;
- (char)discardFromStore:(id)a0 error:(id *)a1;
- (id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)a0;
- (id)storageForStatusInStore:(id)a0;

@end
