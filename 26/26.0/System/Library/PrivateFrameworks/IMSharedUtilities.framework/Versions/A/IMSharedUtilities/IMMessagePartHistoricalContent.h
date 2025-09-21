@class NSString, NSAttributedString, NSDate;

@interface IMMessagePartHistoricalContent : NSObject

@property (retain, nonatomic) NSAttributedString *messagePartText;
@property (retain, nonatomic) NSAttributedString *messagePartTranslation;
@property (retain, nonatomic) NSDate *dateSent;
@property (retain, nonatomic) NSString *backwardCompatibleMessageGUID;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithUpdatedMessagePartText:(id)a0 updatedMessagePartTranslation:(id)a1;
- (id)initWithMessagePartText:(id)a0 messagePartTranslation:(id)a1 dateSent:(id)a2 backwardCompatibleMessageGUID:(id)a3;
- (id)initWithMessageSummaryInfoDictionary:(id)a0;
- (id)messageSummaryInfoDictionaryRepresentation;

@end
