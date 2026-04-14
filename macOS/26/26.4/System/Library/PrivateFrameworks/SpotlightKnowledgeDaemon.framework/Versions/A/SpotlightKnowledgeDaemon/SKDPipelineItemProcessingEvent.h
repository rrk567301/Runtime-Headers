@class NSString;

@interface SKDPipelineItemProcessingEvent : NSObject {
    void /* unknown type, empty encoding */ pipeline;
    void /* unknown type, empty encoding */ donatorBundle;
    void /* unknown type, empty encoding */ isRedonation;
    void /* unknown type, empty encoding */ itemLanguage;
    void /* unknown type, empty encoding */ itemTextContentSize;
    void /* unknown type, empty encoding */ processingErrorCode;
    void /* unknown type, empty encoding */ processingErrorDomain;
    void /* unknown type, empty encoding */ processingResults;
    void /* unknown type, empty encoding */ processingUnderlyingErrorCode;
    void /* unknown type, empty encoding */ processingUnderlyingErrorDomain;
    void /* unknown type, empty encoding */ protectionClass;
    void /* unknown type, empty encoding */ timeForProcessing;
    void /* unknown type, empty encoding */ timePendingBeforeProcessing;
    void /* unknown type, empty encoding */ timeWaitingForRedonation;
}

@property (nonatomic, readonly) NSString *debugDescription;

+ (void)emitPipelineItemProcessingEventWithPipeline:(id)a0 donatorBundle:(id)a1 isRedonation:(id)a2 itemLanguage:(id)a3 itemTextContentSize:(id)a4 processingErrorCode:(id)a5 processingErrorDomain:(id)a6 processingResults:(id)a7 processingUnderlyingErrorCode:(id)a8 processingUnderlyingErrorDomain:(id)a9 protectionClass:(id)a10 timeForProcessing:(id)a11 timePendingBeforeProcessing:(id)a12 timeWaitingForRedonation:(id)a13;

- (void).cxx_destruct;
- (id)init;

@end
