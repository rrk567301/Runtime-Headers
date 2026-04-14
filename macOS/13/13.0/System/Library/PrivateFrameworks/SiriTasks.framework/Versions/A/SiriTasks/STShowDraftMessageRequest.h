@class NSURL;

@interface STShowDraftMessageRequest : AFSiriRequest {
    NSURL *_draftMessageIdentifier;
}

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)message;
- (id)createResponse;
- (id)_initWithDraftMessageIdentifier:(id)a0;
- (id)draftMessageIdentifier;
- (id)createUsageResult;

@end
