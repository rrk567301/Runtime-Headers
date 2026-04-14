@class NSString;

@interface CNRegulatoryLogger : NSObject <CNRegulatoryLogger>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstanceForAddressBook;

- (void)displayingOOPContactPicker;
- (void)logContactsDataAccessEventWithAssetIdentifiers:(id)a0;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1;
- (void)readAndTransmittingContactsData;
- (void)readingContactsData;
- (void)receivingContactsDataFromOOPContactPicker;
- (void)deletingContactsData;
- (void)logContactsDataAccessEvent;
- (void)modifyingContactsData;
- (void)logContactPickerAccessEvent;

@end
