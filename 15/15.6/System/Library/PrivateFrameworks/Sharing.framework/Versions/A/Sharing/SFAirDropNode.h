@class NSDate, NSString, NSUUID, NSSet, CNContact, NSPersonNameComponents, CURangingMeasurement, NSNumber;

@interface SFAirDropNode : NSObject <SFAirDropNodeProtocol> {
    struct __SFOperation { } *_sender;
    NSPersonNameComponents *_nameComponents;
}

@property (readonly) NSDate *discoveryDate;
@property (retain) id node;
@property (retain) NSString *secondaryName;
@property (retain) NSSet *actualHandles;
@property (retain, nonatomic) CURangingMeasurement *rangingMeasurement;
@property (retain, nonatomic) NSSet *contactIDs;
@property (copy, nonatomic) NSString *derivedIntentIdentifier;
@property (getter=isMe) char me;
@property (readonly, getter=isKnown) char known;
@property (getter=isUnknown) char unknown;
@property (getter=isMonogram) char monogram;
@property (getter=isclassroomGroup) char classroomGroup;
@property (getter=isClassroomCourse) char classroomCourse;
@property (getter=isRapport) char rapport;
@property (getter=isUltraWideBindCapable) char ultraWideBindCapable;
@property (readonly) char supportsCredentials;
@property (readonly) char supportsFMF;
@property (readonly) char supportsPasses;
@property (readonly) char supportsMixedTypes;
@property (retain) NSUUID *nodeIdentifier;
@property (copy) NSString *contactIdentifier;
@property (copy) NSString *displayName;
@property (copy) NSString *realName;
@property (copy) NSString *model;
@property (retain) NSSet *formattedHandles;
@property (retain) NSNumber *suggestionIndex;
@property (retain) NSString *transportBundleID;
@property (getter=isClassroom) char classroom;
@property (getter=isDisabled) char disabled;
@property (getter=isSuggestion) char suggestion;
@property long long selectionReason;
@property (retain) struct CGImage { } *displayIcon;
@property (retain) NSUUID *endpointUUID;
@property (retain) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nodeWithSFNode:(struct __SFNode { } *)a0;

- (void)dealloc;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_updateDisplayIconWithSFNode:(struct __SFNode { } *)a0;
- (void)appendDiscoveryInfoToDisplayName:(id)a0;
- (void)cancelSend;
- (id)displayNameForLocale:(id)a0;
- (void)handleOperationCallback:(struct __SFOperation { } *)a0 event:(long long)a1 withResults:(id)a2;
- (void)startSendForBundleID:(id)a0 sessionID:(id)a1 items:(id)a2 description:(id)a3 previewImage:(struct CGImage { } *)a4 fromShareSheet:(char)a5;
- (void)updateDisplayName;
- (void)updateWithSFNode:(struct __SFNode { } *)a0;

@end
