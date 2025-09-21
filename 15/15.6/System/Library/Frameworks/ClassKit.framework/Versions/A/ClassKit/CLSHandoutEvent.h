@class NSString, NSArray, NSDate;

@interface CLSHandoutEvent : CLSInsightEvent

@property (copy, nonatomic) NSString *classID;
@property (copy, nonatomic) NSString *handoutID;
@property (retain, nonatomic) NSDate *dueDate;
@property (copy, nonatomic) NSArray *recipientIDs;
@property (copy, nonatomic) NSArray *attachmentDetails;

+ (char)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)validateObject:(id *)a0;
- (id)initWithClassID:(id)a0 handoutID:(id)a1 eventType:(long long)a2;
- (void)mergeWithObject:(id)a0;

@end
