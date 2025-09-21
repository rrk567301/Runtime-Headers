@class _TtC21DocumentUnderstanding20DUFoundInEventResult, _TtC21DocumentUnderstanding34DUFoundInEventClassificationResult, _TtC21DocumentUnderstanding26DUStructuredEntityResponse, _TtC21DocumentUnderstanding32DUCategoryClassificationResponse, NSArray, _TtC21DocumentUnderstanding11DUDebugInfo, _TtC21DocumentUnderstanding36DUUserInterfaceUnderstandingResponse, _TtC21DocumentUnderstanding25DULanguageTaggingResponse, _TtC21DocumentUnderstanding24DUTopicDetectionResponse;

@interface DocumentUnderstanding.DUResponse : NSObject <NSCoding, NSCopying> {
    void /* function */ poem;
    void /* function */ posTags;
}

@property (nonatomic, retain) _TtC21DocumentUnderstanding24DUTopicDetectionResponse *topics;
@property (nonatomic, retain) _TtC21DocumentUnderstanding26DUStructuredEntityResponse *structuredEntities;
@property (nonatomic, retain) _TtC21DocumentUnderstanding25DULanguageTaggingResponse *languageTags;
@property (nonatomic, retain) _TtC21DocumentUnderstanding36DUUserInterfaceUnderstandingResponse *userInterfaceUnderstandingResults;
@property (nonatomic, retain) _TtC21DocumentUnderstanding32DUCategoryClassificationResponse *documentCategories;
@property (nonatomic, retain) _TtC21DocumentUnderstanding20DUFoundInEventResult *foundInEventResult;
@property (nonatomic, retain) _TtC21DocumentUnderstanding34DUFoundInEventClassificationResult *foundInEventClassificationResult;
@property (nonatomic, copy) NSArray *poem;
@property (nonatomic, copy) NSArray *posTags;
@property (nonatomic, retain) _TtC21DocumentUnderstanding11DUDebugInfo *responseDebugInfo;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
