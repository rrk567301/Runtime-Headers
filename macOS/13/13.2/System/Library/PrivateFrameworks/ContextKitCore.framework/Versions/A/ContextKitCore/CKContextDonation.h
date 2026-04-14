@class NSString, NSMutableArray, CKContextUserActivity;

@interface CKContextDonation : NSObject <NSSecureCoding> {
    _Atomic BOOL _donated;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) CKContextUserActivity *associatedUserActivity;
@property unsigned long long remoteProcesses;
@property (nonatomic) unsigned long long nonce;
@property (readonly, nonatomic) NSString *donorBundleIdentifier;

+ (id)establishServiceConnection;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addItem:(id)a0;
- (void)donate;
- (id)initWithDonorBundleIdentifier:(id)a0;
- (id)initWithDonations:(id)a0 donorBundleIdentifier:(id)a1;
- (id)concatenatedRequestsText;
- (id)concatenatedRequestsDebugText;
- (id)_concatenatedRequestTextUsingDebugText:(BOOL)a0;

@end
