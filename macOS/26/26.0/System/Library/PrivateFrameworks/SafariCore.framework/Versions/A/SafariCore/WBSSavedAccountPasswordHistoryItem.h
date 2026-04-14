@class NSString, NSDictionary, NSDate;

@interface WBSSavedAccountPasswordHistoryItem : NSObject <WBSSavedAccountSidecarHistoryItem> {
    NSDictionary *_originalKeychainDictionary;
}

@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, copy, nonatomic) NSString *oldPassword;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithPassword:(id)a0 oldPassword:(id)a1 date:(id)a2 type:(id)a3 identifier:(id)a4 originalDictionaryRepresentation:(id)a5;
- (id)initWithDate:(id)a0 password:(id)a1 type:(id)a2;
- (id)initWithPassword:(id)a0 oldPassword:(id)a1;
- (id)initWithPassword:(id)a0 type:(id)a1;

@end
