@class NSString, AFHomeAccessorySiriDataSharingChangeLogEvent, NSDate;

@interface _AFHomeAccessorySiriDataSharingChangeLogEventMutation : NSObject <AFHomeAccessorySiriDataSharingChangeLogEventMutating> {
    AFHomeAccessorySiriDataSharingChangeLogEvent *_baseModel;
    NSDate *_date;
    long long _previousOptInStatus;
    long long _newOptInStatus;
    long long _changeSource;
    NSString *_changeReason;
    NSString *_buildVersion;
    NSString *_productVersion;
    NSString *_schemaVersion;
    NSString *_logEventIdentifier;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasDate : 1; unsigned char hasPreviousOptInStatus : 1; unsigned char hasNewOptInStatus : 1; unsigned char hasChangeSource : 1; unsigned char hasChangeReason : 1; unsigned char hasBuildVersion : 1; unsigned char hasProductVersion : 1; unsigned char hasSchemaVersion : 1; unsigned char hasLogEventIdentifier : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setDate:(id)a0;
- (void)setSchemaVersion:(id)a0;
- (void)setBuildVersion:(id)a0;
- (void)setProductVersion:(id)a0;
- (id)initWithBaseModel:(id)a0;
- (id)generate;
- (void)setPreviousOptInStatus:(long long)a0;
- (void)setNewOptInStatus:(long long)a0;
- (void)setChangeSource:(long long)a0;
- (void)setChangeReason:(id)a0;
- (void)setLogEventIdentifier:(id)a0;

@end
