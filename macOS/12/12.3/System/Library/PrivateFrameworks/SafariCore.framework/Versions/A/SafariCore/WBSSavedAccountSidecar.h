@class WBSPasswordWarningHideMarker, NSString, NSDictionary, WBSTOTPGenerator;

@interface WBSSavedAccountSidecar : NSObject

@property (retain, nonatomic) NSDictionary *originalKeychainDictionary;
@property (copy, nonatomic) NSString *user;
@property (retain, nonatomic) WBSTOTPGenerator *totpGenerator;
@property (copy, nonatomic) NSString *notesEntry;
@property (retain, nonatomic) WBSPasswordWarningHideMarker *hideWarningMarker;
@property (readonly, nonatomic) NSString *host;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithUser:(id)a0 host:(id)a1;
- (id)initWithUser:(id)a0 host:(id)a1 data:(id)a2;
- (BOOL)isSidecarDataEqual:(id)a0;

@end
