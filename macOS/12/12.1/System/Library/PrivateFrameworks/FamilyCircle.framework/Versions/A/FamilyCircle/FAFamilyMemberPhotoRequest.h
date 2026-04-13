@class NSNumber, ACAccount, NSString;

@interface FAFamilyMemberPhotoRequest : AAFamilyRequest

@property (copy, nonatomic) NSNumber *familyMemberDSID;
@property (retain, nonatomic, setter=setiTunesAccount:) ACAccount *iTunesAccount;
@property (copy, nonatomic) NSString *serverCacheTag;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)urlString;
- (id)urlRequest;

@end
