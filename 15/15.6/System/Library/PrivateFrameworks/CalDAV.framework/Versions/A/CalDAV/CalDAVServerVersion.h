@class NSString, NSSet;

@interface CalDAVServerVersion : NSObject <NSCopying>

@property (nonatomic) double version;
@property (nonatomic) char supportsTimeRangeFilter;
@property (nonatomic) char supportsTimeRangeFilterWithoutEndDate;
@property (nonatomic) char supportsTimeRangeFilterOnInbox;
@property (nonatomic) char supportsAutoSchedule;
@property (nonatomic) char supportsPrivateComments;
@property (nonatomic) char supportsClearingPrivateComments;
@property (nonatomic) char supportsLikenessPropagation;
@property (nonatomic) char supportsSharing;
@property (nonatomic) char supportsSharingNoScheduling;
@property (nonatomic) char supportsCalendarProxy;
@property (nonatomic) char supportsInboxAvailability;
@property (nonatomic) char supportsPrivateEvents;
@property (nonatomic) char supportsSubscriptionCalendars;
@property (nonatomic) char supportsManagedSubscriptionCalendars;
@property (nonatomic) char supportsSubscriptionMirroring;
@property (nonatomic) char supportsParticipantRoles;
@property (nonatomic) char supportsPrincipalPropertySearch;
@property (nonatomic) char supportsExtendedCalendarQuery;
@property (nonatomic) char supportsRequestCompression;
@property (nonatomic) char supportsManagedAttachments;
@property (nonatomic) char supportsCheckForValidEmail;
@property (nonatomic) char supportsChecksumming;
@property (nonatomic) char supportsCalendarHomeSync;
@property (nonatomic) char supportsCalendarNoTimezone;
@property (nonatomic) char supportsCalendarRecurrenceSplit;
@property (nonatomic) char supportsCalendarAudit;
@property (nonatomic) char supportsTelephone;
@property (nonatomic) char supportsDefaultAlarms;
@property (nonatomic) char alwaysSupportsFreebusyOnOutbox;
@property (nonatomic) char expandPropertyReportIsUnreliable;
@property (copy, nonatomic) NSString *supportedCalendarComponentSets;
@property (retain, nonatomic) NSSet *complianceClasses;
@property (copy, nonatomic) NSString *serverHeader;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) char requiresOpeningAttachmentAsLink;
@property (readonly, nonatomic) char shouldUseDeleteAndAddInsteadOfMoveBetweenCalendars;

+ (id)_prototypeMatchingServerHeaders:(id)a0;
+ (id)versionWithHTTPHeaders:(id)a0;
+ (id)versionWithPropertyValue:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)propertyValue;
- (id)_additionalFlagKeys;
- (id)_allFlagKeys;
- (id)_propertiesToComplianceClasses;
- (void)_setPropertiesFromComplianceClasses:(id)a0;

@end
