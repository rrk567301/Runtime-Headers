@class NSString, NSDictionary, NSDate;

@interface WBSSavedAccountSharedGroupHistoryItem : NSObject <WBSSavedAccountSidecarHistoryItem> {
    NSDictionary *_originalKeychainDictionary;
}

@property (readonly, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSString *groupName;
@property (readonly, nonatomic) NSString *eventType;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithGroupID:(id)a0 groupName:(id)a1 eventType:(id)a2;

@end
