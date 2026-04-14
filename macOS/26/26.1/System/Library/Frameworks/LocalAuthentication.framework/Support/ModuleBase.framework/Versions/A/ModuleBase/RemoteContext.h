@class NSUUID, NSString, NSObject;
@protocol OS_os_transaction, LACRemoteContextOwnership;

@interface RemoteContext : NSObject <LACRemoteContextOwnership> {
    NSString *_description;
}

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) id<LACRemoteContextOwnership> ownership;
@property (nonatomic) unsigned long long acmExternalizedFormHash;
@property (readonly, nonatomic) RemoteContext *originalOwnership;
@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction;

- (id)description;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithOwnership:(id)a0 uuid:(id)a1 description:(id)a2 originalOwnership:(id)a3;

@end
