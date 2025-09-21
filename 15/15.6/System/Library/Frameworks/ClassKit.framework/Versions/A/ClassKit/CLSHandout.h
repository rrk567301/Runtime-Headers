@class CLSSchedule, NSString, CLSClass, NSArray, NSError, NSDate;

@interface CLSHandout : CLSAbstractHandout <CLSRelationable, CLSCollaborationStateRepresentable, CLSMutableAssetAdopter> {
    NSString *_title;
    NSString *_instructions;
    NSDate *_dueDate;
    char _reviewed;
}

@property (readonly, nonatomic) CLSClass *effectiveClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long substate;
@property (nonatomic) long long publishingState;
@property (retain, nonatomic) NSError *publishError;
@property (retain, nonatomic) NSDate *dateLastReviewed;
@property (retain, nonatomic) NSDate *lastReviewedDate;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) long long type;
@property (readonly, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) NSArray *collaborationStates;
@property (readonly, nonatomic) NSArray *attachmentCollaborationStates;
@property (nonatomic, getter=isReviewed) char reviewed;
@property (retain, nonatomic) CLSSchedule *schedule;
@property (readonly, nonatomic) NSArray *assets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (char)supportsSecureCoding;
+ (id)relations;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)dictionaryRepresentation;
- (char)validateObject:(id *)a0;
- (void)_adjustPublishingStateIfNeeded;
- (void)addAsset:(id)a0;
- (void)addHandoutAttachment:(id)a0;
- (void)addHandoutRecipient:(id)a0;
- (void)mergeWithObject:(id)a0;
- (void)removeAsset:(id)a0;
- (void)removeHandoutAttachment:(id)a0;
- (void)removeHandoutRecipient:(id)a0;

@end
