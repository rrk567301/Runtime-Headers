@class NSString, NSDictionary, IMDMessageRecord, NSDate, NSArray, NSURL;

@interface IMDChatRecord : IMDRecord <IMDBridgedRecord>

@property (readonly, copy, nonatomic) NSString *lastAddressedSimID;
@property (readonly, copy, nonatomic) NSString *serverChangeToken;
@property (readonly, nonatomic) long long ckSyncState;
@property (readonly, copy, nonatomic) NSString *cloudkitRecordID;
@property (readonly, nonatomic) long long rowID;
@property (readonly, copy, nonatomic) NSString *guid;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned char style;
@property (readonly, copy, nonatomic) NSString *accountID;
@property (readonly, copy, nonatomic) NSDictionary *properties;
@property (readonly, copy, nonatomic) NSString *chatIdentifier;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSString *roomName;
@property (readonly, copy, nonatomic) NSString *accountLogin;
@property (readonly, nonatomic, getter=isArchived) BOOL archived;
@property (readonly, copy, nonatomic) NSString *lastAddressedHandle;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) NSString *groupID;
@property (readonly, nonatomic) BOOL successfulQuery;
@property (readonly, copy, nonatomic) NSString *cloudServerChangeToken;
@property (readonly, nonatomic) long long cloudSyncState;
@property (readonly, copy, nonatomic) NSString *originalGroupID;
@property (readonly, copy, nonatomic) NSString *cloudRecordID;
@property (readonly, copy, nonatomic) NSString *cloudKitRecordID;
@property (readonly, copy, nonatomic) NSString *lastAddressedSIMID;
@property (readonly, nonatomic, getter=isBlackholed) BOOL blackholed;
@property (readonly, copy, nonatomic) NSDate *syndicationDate;
@property (readonly, nonatomic) long long rawSyndicationDate;
@property (readonly, nonatomic) long long syndicationType;
@property (readonly, nonatomic, getter=isFiltered) long long filtered;
@property (readonly, nonatomic) IMDMessageRecord *lastMessageRecord;
@property (readonly, nonatomic) NSArray *handleRecords;
@property (readonly, nonatomic) NSDictionary *domainIdentifiers;
@property (readonly, nonatomic, getter=isRecovered) BOOL recovered;
@property (readonly, nonatomic, getter=isDeletingIncomingMessages) BOOL deletingIncomingMessages;
@property (readonly, nonatomic) NSURL *transcriptBackgroundFileURL;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long lastReadMessageTimestamp;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)keyPathsToColumns;
+ (id)transcriptBackgroundFileURLFromProperties:(id)a0;

- (unsigned long long)_cfTypeID;
- (id)init;
- (struct __CFArray **)_localCache;
- (const struct { char *x0; long long x1; struct *x2; unsigned int x3; void *x4; } *)_propertyDescriptorForProperty:(long long)a0;
- (void *)_copyUpdatedRecord;
- (int)_propertyIDForProperty:(long long)a0;
- (long long)_recordIdentifier;
- (unsigned long long)_recordPropertyCount;
- (void)_setRecordIdentifier:(long long)a0;
- (struct _IMDChatRecordStruct { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; long long x1; struct __CFArray *x2; struct __CFArray *x3; long long x4; struct _IMDMessageRecordStruct *x5; long long x6; struct __CFDictionary *x7; struct __CFArray *x8; } *)cfChatRecord;
- (id)initWithRecordRef:(struct _IMDChatRecordStruct { } *)a0;

@end
