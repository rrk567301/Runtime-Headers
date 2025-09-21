@class NSString, NSArray, NSData, ATQuestionTopic, NSDate;

@interface AskTo.ATQuestion : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ systemId;
    void /* unknown type, empty encoding */ version;
    void /* function */ id;
    void /* unknown type, empty encoding */ contentHash;
    void /* unknown type, empty encoding */ topicMetadata;
    void /* function */ customTopicData;
    void /* function */ title;
    void /* function */ summary;
    void /* function */ longTitle;
    void /* function */ longSummary;
    void /* function */ notificationText;
    void /* function */ answerChoices;
    void /* unknown type, empty encoding */ defaultAnswerChoice;
    void /* function */ associatedContentDisplayName;
    void /* function */ associatedContentIdentifier;
    void /* function */ associatedContentBundleIdentifier;
    void /* function */ associatedContentAdamIdentifier;
    void /* unknown type, empty encoding */ expirationDate;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, retain) ATQuestionTopic *topic;
@property (nonatomic, copy) NSData *customTopicData;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic, copy) NSString *longTitle;
@property (nonatomic, copy) NSString *longSummary;
@property (nonatomic, copy) NSString *notificationText;
@property (nonatomic, copy) NSArray *answerChoices;
@property (nonatomic, copy) NSString *associatedContentDisplayName;
@property (nonatomic, copy) NSString *associatedContentIdentifier;
@property (nonatomic, copy) NSString *associatedContentBundleIdentifier;
@property (nonatomic, copy) NSString *associatedContentAdamIdentifier;
@property (nonatomic, copy) NSDate *expirationDate;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithId:(id)a0 topic:(id)a1 title:(id)a2 summary:(id)a3;
- (id)initWithId:(id)a0 topic:(id)a1 title:(id)a2 summary:(id)a3 shortTitle:(id)a4 shortSummary:(id)a5;
- (id)initWithSystemId:(id)a0 version:(double)a1 id:(id)a2 topic:(id)a3 title:(id)a4 summary:(id)a5 longTitle:(id)a6 longSummary:(id)a7 notificationText:(id)a8 answerChoices:(id)a9;

@end
