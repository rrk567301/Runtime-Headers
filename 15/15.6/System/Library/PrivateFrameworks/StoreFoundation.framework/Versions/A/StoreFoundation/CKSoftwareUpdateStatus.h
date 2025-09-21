@class NSError;

@interface CKSoftwareUpdateStatus : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) unsigned long long bytesDownloaded;
@property (readonly, nonatomic) unsigned long long bytesTotal;
@property (readonly, nonatomic) double percentComplete;
@property (readonly, nonatomic) double estimatedTimeRemaining;
@property (readonly, nonatomic) char canCancel;
@property (readonly, nonatomic) NSError *error;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithError:(id)a0;
- (id)initWithProgress:(double)a0 statusInfo:(id)a1 canCancel:(char)a2;

@end
