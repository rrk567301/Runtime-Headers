@class NSError;

@interface CKSoftwareUpdateStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) unsigned long long bytesDownloaded;
@property (readonly, nonatomic) unsigned long long bytesTotal;
@property (readonly, nonatomic) double percentComplete;
@property (readonly, nonatomic) double estimatedTimeRemaining;
@property (readonly, nonatomic) BOOL canCancel;
@property (readonly, nonatomic) NSError *error;

- (id)initWithError:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProgress:(double)a0 statusInfo:(id)a1 canCancel:(BOOL)a2;

@end
