@class NSString, CPLRecordChange;

@interface CPLRecordStatus : NSObject <NSSecureCoding> {
    union { struct { unsigned char unknown : 1; unsigned char quarantined : 1; unsigned char resetting : 1; unsigned char uploaded : 1; unsigned char waitingForUpload : 1; unsigned char uploading : 1; unsigned char waitingForUpdate : 1; unsigned char updating : 1; unsigned char confirmed : 1; unsigned char shared : 1; } status; unsigned int packedStatus; } _status;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long generation;
@property (nonatomic, getter=isUnknown) char unknown;
@property (nonatomic, getter=isQuarantined) char quarantined;
@property (nonatomic, getter=isResetting) char resetting;
@property (nonatomic, getter=isUploaded) char uploaded;
@property (nonatomic, getter=isWaitingForUpload) char waitingForUpload;
@property (nonatomic, getter=isUploading) char uploading;
@property (nonatomic, getter=isWaitingForUpdate) char waitingForUpdate;
@property (nonatomic, getter=isUpdating) char updating;
@property (nonatomic, getter=isConfirmed) char confirmed;
@property (nonatomic, getter=isShared) char shared;
@property (readonly, nonatomic) CPLRecordChange *record;
@property (readonly, nonatomic) NSString *statusDescription;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)initWithRecord:(id)a0 generation:(unsigned long long)a1;

@end
