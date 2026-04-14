@class NSString;

@interface CNRegulatoryLogger : NSObject <CNRegulatoryLogger>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstanceForAddressBook;

- (void)readingContactsData;
- (void)modifyingContactsData;
- (void)deletingContactsData;
- (void)readAndTransmittingContactsData;
- (void)displayingOOPContactPicker;
- (void)receivingContactsDataFromOOPContactPicker;
- (void)logContactsDataAccessEvent;
- (void)logContactsDataAccessEventWithAssetIdentifiers:(id)a0;
- (void)logContactPickerAccessEvent;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1;

@end
