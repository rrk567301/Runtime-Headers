@class NSString;

@interface CNRegulatoryLogger : NSObject <CNRegulatoryLogger>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstanceForAddressBook;

- (void)deletingContactsData;
- (void)displayingOOPContactPicker;
- (void)modifyingContactsData;
- (void)readAndTransmittingContactsData;
- (void)logContactsDataAccessEventWithAssetIdentifiers:(id)a0;
- (void)logContactsDataAccessEvent;
- (void)receivingContactsDataFromOOPContactPicker;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1;
- (void)logContactPickerAccessEvent;
- (void)readingContactsData;

@end
