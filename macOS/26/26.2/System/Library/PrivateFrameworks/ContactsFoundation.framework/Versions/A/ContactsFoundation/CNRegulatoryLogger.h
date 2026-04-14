@class NSString;

@interface CNRegulatoryLogger : NSObject <CNRegulatoryLogger>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstanceForAddressBook;

- (void)receivingContactsDataFromOOPContactPicker;
- (void)readingContactsData;
- (void)displayingOOPContactPicker;
- (void)logContactsDataAccessEventWithAssetIdentifiers:(id)a0;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1;
- (void)readAndTransmittingContactsData;
- (void)logContactsDataAccessEvent;
- (void)logContactPickerAccessEvent;
- (void)deletingContactsData;
- (void)modifyingContactsData;

@end
