@class NSString, PPSource;

@interface PPSWStringDonation : NSObject <BMIdentifiableContentEvent> {
    void /* function */ uniqueId;
    void /* function */ extractionContent;
}

@property (nonatomic, copy) NSString *uniqueId;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic, retain) PPSource *source;
@property (nonatomic, copy) NSString *extractionContent;
@property (nonatomic) BOOL shouldConsume;

- (id)initWithLabeledStrings:(id)a0 bundleId:(id)a1 groupId:(id)a2 documentId:(id)a3;
- (id)init;
- (void).cxx_destruct;

@end
