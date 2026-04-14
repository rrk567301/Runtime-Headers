@class WBSPasswordWarningHideMarker, NSString, NSDictionary, NSDate, NSURLProtectionSpace, WBSTOTPGenerator;

@interface WBSSavedAccountSidecar : NSObject <NSCopying>

@property (retain, nonatomic) NSDictionary *originalKeychainDictionary;
@property (copy, nonatomic) NSString *user;
@property (retain, nonatomic) WBSTOTPGenerator *totpGenerator;
@property (copy, nonatomic) NSString *notesEntry;
@property (retain, nonatomic) WBSPasswordWarningHideMarker *hideWarningMarker;
@property (copy, nonatomic) NSDate *lastOneTimeShareDateForPasskey;
@property (readonly, copy, nonatomic) NSURLProtectionSpace *protectionSpace;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithUser:(id)a0 protectionSpace:(id)a1;
- (id)initWithUser:(id)a0 protectionSpace:(id)a1 data:(id)a2;
- (BOOL)isSidecarDataEqualForMergingSavedAccounts:(id)a0;

@end
