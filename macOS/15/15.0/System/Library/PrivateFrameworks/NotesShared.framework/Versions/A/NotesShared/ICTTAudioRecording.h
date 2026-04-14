@class NSDictionary, ICTTMergeableAttributedString, NSNumber;

@interface ICTTAudioRecording : ICCRObject

@property (class, nonatomic, readonly) NSDictionary *CRProperties;

@property (nonatomic, retain) ICTTMergeableAttributedString *summary;
@property (nonatomic, retain) ICTTMergeableAttributedString *topLineSummary;
@property (nonatomic, retain) NSNumber *summaryVersion;
@property (nonatomic, retain) id fragments;
@property (nonatomic, retain) NSNumber *callRecording;
@property (nonatomic, retain) NSNumber *callType;

- (id)initWithIdentity:(id)a0 fields:(id)a1;
- (id)initWithICCRCoder:(id)a0;

@end
