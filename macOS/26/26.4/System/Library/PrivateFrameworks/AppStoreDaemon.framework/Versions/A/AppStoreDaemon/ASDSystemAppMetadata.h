@class NSString;

@interface ASDSystemAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *bundleID;
@property (getter=isOneShot) BOOL oneShot;
@property (nonatomic) BOOL suppressDialogs;
@property (getter=isUserInitiated) BOOL userInitiated;
@property (getter=isUserWaiting) BOOL userWaiting;
@property (nonatomic) BOOL shouldAskForRatingException;
@property (nonatomic) unsigned long long ageRatingValue;
@property (nonatomic) BOOL isDefaultBrowser;
@property (readonly) long long metadataType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBundleID:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
