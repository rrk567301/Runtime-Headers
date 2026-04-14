@class NSString;

@interface CNRegulatoryLogger : NSObject <CNRegulatoryLogger>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstanceForAddressBook;

- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1;
- (void)readingContactsData;
- (void)modifyingContactsData;
- (void)deletingContactsData;
- (void)readAndTransmittingContactsData;
- (void)displayingOOPContactPicker;
- (void)receivingContactsDataFromOOPContactPicker;
- (void)logContactsDataAccessEvent;
- (void)logContactPickerAccessEvent;

@end
