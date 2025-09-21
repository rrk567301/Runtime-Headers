@class NSString, NSArray, TUHandle;

@interface AFSiriIncomingCall : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *callUUID;
@property (readonly, copy, nonatomic) NSString *callProviderIdentifier;
@property (readonly, copy, nonatomic) NSString *callProviderBundleID;
@property (readonly, copy, nonatomic) NSArray *callerContactIdentifiers;
@property (readonly, nonatomic) TUHandle *handle;
@property (readonly, nonatomic) char isVideo;
@property (readonly, nonatomic) char isCallerIDBlocked;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCallUUID:(id)a0 callProviderIdentifier:(id)a1 callProviderBundleID:(id)a2 callerContactIdentifiers:(id)a3 handle:(id)a4 isVideo:(char)a5 isCallerIDBlocked:(char)a6;
- (id)initWithCallUUID:(id)a0 callProviderIdentifier:(id)a1 callProviderBundleID:(id)a2 callers:(id)a3 handle:(id)a4 isVideo:(char)a5 isCallerIDBlocked:(char)a6;

@end
