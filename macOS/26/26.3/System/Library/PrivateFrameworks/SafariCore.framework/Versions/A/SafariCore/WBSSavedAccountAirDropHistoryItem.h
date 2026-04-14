@class NSString, NSDictionary, NSDate;

@interface WBSSavedAccountAirDropHistoryItem : NSObject <WBSSavedAccountSidecarHistoryItem> {
    NSDictionary *_originalKeychainDictionary;
}

@property (readonly, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
