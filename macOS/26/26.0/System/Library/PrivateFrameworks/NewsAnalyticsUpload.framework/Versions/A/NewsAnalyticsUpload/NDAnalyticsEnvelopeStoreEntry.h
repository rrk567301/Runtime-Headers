@class NSString, NSDate;

@interface NDAnalyticsEnvelopeStoreEntry : NSObject <NDAnalyticsEnvelopeStoreEntry> {
    unsigned long long _submissionDateMillisecondsSince1970;
}

@property (copy, nonatomic) NSString *envelopeIdentifier;
@property (copy, nonatomic) NSDate *envelopeSubmissionDate;
@property (nonatomic) int envelopeContentType;

- (id)stringRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithStringRepresentation:(id)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
